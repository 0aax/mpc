from casadi.casadi import diff
from mpcc.solver import build_solver
from mpcc.utils import compute_cost_step, gen_t, compute_step
from mpcc.loss import gen_cost_func

import time
import casadi as cd
import matplotlib.pyplot as plt
import matplotlib.animation as animation
import matplotlib.gridspec as gridspec
import numpy as np

T = 10. # Time horizon
N = 40  # number of control intervals
inter_axle = 0.5   # inter-axle distance

ts = .033 # time-step
e = 0.07

keep_going = True
pause = False
num_targets = 0

fig = plt.figure(figsize=(15, 10))
gs = gridspec.GridSpec(10, 10, wspace=4., hspace=5.)
ax1 = plt.subplot(gs[0:4, 0:6])
ax2 = plt.subplot(gs[4:11, 0:6])
ax3 = plt.subplot(gs[3:7, 6:11])
ax4 = plt.subplot(gs[7:11, 6:11])
ax5 = plt.subplot(gs[0:3, 6:11])
# fig, ((ax1, ax3), (ax2, ax4)) =  plt.subplots(2, 2, figsize=(12, 10))

# # 5th-order
# xs, ys = 0, 0
# xt, yt = 3.3, 2
#         # [x, y, phi, delta, vx, theta]
# init_ts = [xs, ys, cd.pi/3, 0, 0, 0]
# xpts = [xs] + [.5, 2] + [xt]
# ypts = [ys] + [1, 3] + [yt]
# order = 5

# # 5th-order
# xs, ys = 0, 0
# xt, yt = 3, 3
#         # [x, y, phi, delta, vx, theta]
# init_ts = [xs, ys, cd.pi/2, 0, 0, 0]
# xpts = [xs] + [1, 2] + [xt]
# ypts = [ys] + [2, 2.5] + [yt]
# order = 5

# # 3rd-order
# xs, ys = -0.26, 0
# xt, yt = 2, 3
#         # [x, y, phi, delta, vx, theta]
# init_ts = [xs, ys, cd.pi/2, 0, 0, 0]
# xpts = [xs] + [0, 1] + [xt]
# ypts = [ys] + [1, 2] + [yt]
# order = 3

# 3rd-order
xs, ys = -0.3, 0
xt, yt = 2, 3
        # [x, y, phi, delta, vx, theta]
init_ts = [xs, ys, 2*cd.pi/3, 0, 0, 0]
xpts = [xs] + [0, 1] + [xt]
ypts = [ys] + [1.5, 1.75] + [yt]
order = 3

# # 1st-order
# xs, ys = 0, 0
# xt, yt = 2, 2 
#         # [x, y, phi, delta, vx, theta]
# init_ts = [xs, ys, cd.pi/4, 0, 0, 0]
# xpts = [xs] + [1] + [xt]
# ypts = [ys] + [1] + [yt]
# order = 1

tpts = gen_t(xpts, ypts)
xpoly = np.polynomial.polynomial.Polynomial.fit(tpts, xpts, order)
ypoly = np.polynomial.polynomial.Polynomial.fit(tpts, ypts, order)
cx = list(xpoly)[::-1]
cy = list(ypoly)[::-1]

print(cx, cy)

cost_func = gen_cost_func(order)
solver, params, trajectories = build_solver(init_ts, T, N, inter_axle, order, xpoly, ypoly)
_, lbw_suffix, ubw_suffix, lbg, ubg = params

time_y = [None]
time_x = [0]

cost_y = [None]
true_cost = 0

def solve_mpcc():
    global time_y, time_x, cost_y, sol

    lbw = init_ts + lbw_suffix
    ubw = init_ts + ubw_suffix

    time_before_sol = time.time()

    sol = solver(x0=sol['x'], lam_x0=sol['lam_x'], lam_g0=sol['lam_g'], lbx=lbw, ubx=ubw, lbg=lbg, ubg=ubg, p=cd.vertcat(xt, yt, cx, cy))

    time_after_sol = time.time()
    diff_sol = time_after_sol - time_before_sol
    time_y.append(diff_sol)
    time_x.append(time_x[-1]+1)

    cost = sol['f'].full().flatten()
    cost_y.append(cost[0])

    state_opt, u_opt = trajectories(sol['x'])
    state_opt = state_opt.full() # to numpy array
    u_opt = u_opt.full() # to numpy array

    return state_opt, u_opt

def gen():
    global keep_going, num_targets
    i = 0
    while num_targets < 1:
        if not pause:
            i += 1
        if not keep_going:
            num_targets += 1
            print(num_targets)
            keep_going = True
        yield i


def onClick(event):
    global pause
    pause ^= True

def update(i):
    global init_ts, keep_going, true_cost

    state_opt, u_opt = solve_mpcc()

    x_diff = [xt - x for x in state_opt[0]]
    y_diff = [yt - y for y in state_opt[1]]

    x_line.set_ydata(x_diff)
    y_line.set_ydata(y_diff)

    aux_line.set_ydata(np.append(np.nan, u_opt[1]))
    alphaux_line.set_ydata(np.append(np.nan, u_opt[0]))

    traj.set_data(state_opt[0], state_opt[1])
    curr_pt.set_data([state_opt[0][0]], [state_opt[1][0]])

    time_pts.set_offsets(np.c_[time_x, time_y])
    cost_pts.set_offsets(np.c_[time_x, cost_y])

    init = [state_opt[0][0], state_opt[1][0], state_opt[2][0], state_opt[3][0], state_opt[4][0], state_opt[5][0], u_opt[0][0], u_opt[1][0], u_opt[2][0]]

    init_ts = compute_step(init, ts, inter_axle)
    x_txt.set_text('x: ' + str(init_ts[0]))
    y_txt.set_text('y: ' + str(init_ts[0]))
    a_txt.set_text(r'$a$: ' + str(init_ts[-2]))
    alpha_txt.set_text(r'$\alpha$: ' + str(init_ts[-3]))

    c_tmp = compute_cost_step(init, cost_func, cx, cy, ts)
    true_cost += c_tmp
    cost_txt.set_text('True cost (in progress): ' + str(true_cost))

    if abs(init_ts[0]-xt) < e and abs(init_ts[1]-yt) < e:
        cost_txt.set_text('True cost: ' + str(true_cost))
        keep_going = False
    
    return [x_line, y_line, aux_line, alphaux_line, traj, curr_pt, time_pts, cost_pts]

tgrid = [T/N*k for k in range(N+1)]

w0, lbw, ubw, lbg, ubg = params
w0 = init_ts + w0
lbw = init_ts + lbw
ubw = init_ts + ubw

time_before_sol = time.time()

sol = solver(x0=w0, lbx=lbw, ubx=ubw, lbg=lbg, ubg=ubg, p=cd.vertcat(xt, yt, cx, cy))

time_after_sol = time.time()
diff_sol = time_after_sol - time_before_sol
time_y.append(diff_sol)
time_x.append(time_x[-1]+1)

cost = sol['f'].full().flatten()
cost_y.append(cost[0])

w_opt = sol['x'].full().flatten()
state_opt, u_opt = trajectories(sol['x'])
state_opt = state_opt.full() # to numpy array
u_opt = u_opt.full() # to numpy array

x_diff = [xt - x for x in state_opt[0]]
y_diff = [yt - y for y in state_opt[1]]

ax1.set_xlim([0, int(T)])
ax1.set_ylim([-5, 5])
x_line, = ax1.plot(tgrid, x_diff, '-', color='gray')
y_line, = ax1.plot(tgrid, y_diff, '-', color='black')
aux_line, = ax1.step(tgrid, np.append(np.nan, u_opt[1]), '-.', color='green')
alphaux_line, = ax1.step(tgrid, np.append(np.nan, u_opt[0]), '-.', color='blue')

ax1.set_title('Controls')
ax1.legend(['xt - x','yt - y', r'$a$', r'$\alpha$'])
ax1.set_xlabel('Time horizon')
ax1.grid()

ax2.set_title('Trajectory')
ax2.set_ylim([-5, 5])
ax2.set_xlim([-5, 5])
ax2.set_ylabel('y-axis')
ax2.set_xlabel('x-axis')

# plot curve
ax2.scatter(xpts, ypts, color='grey', s=15)
tplt = np.linspace(0, 1)
xplt = xpoly(tplt)
yplt = ypoly(tplt)
ax2.plot(xplt, yplt, '-.', color='grey')

traj, = ax2.plot(state_opt[0], state_opt[1], '-', color='green', alpha=0.4)
curr_pt, = ax2.plot([state_opt[0][0]], [state_opt[1][0]], marker='o', color='black')    
target_pt, = ax2.plot([xt], [yt], marker='x', color='black')
ax2.grid()

ax3.set_title('Timing')
ax3.set_xlabel('Euler step #')
ax3.set_ylabel('Seconds')
ax3.set_xlim([0, 200])
ax3.set_ylim([0, .25])
time_pts = ax3.scatter(time_x, time_y, s=10, color=['black'])
ax3.grid(axis='y')

ax4.set_title('Step Cost')
ax4.set_xlabel('Euler step #')
ax4.set_ylabel('Cost')
ax4.set_xlim([0, 200])
ax4.set_ylim([0, 20])
cost_pts = ax4.scatter(time_x, cost_y, s=10, color=['black'])
ax4.grid(axis='y')

ax5.set_xticks([])
ax5.set_yticks([])

fs = 13
x_txt = ax5.text(.05, .8, 'x: ' + str(init_ts[0]), fontsize=fs)
y_txt = ax5.text(.05, .7, r'$a$: ' + str(init_ts[1]), fontsize=fs)
a_txt = ax5.text(.05, .5, 'a: ' + str(init_ts[-2]), fontsize=fs)
alpha_txt = ax5.text(.05, .4, r'$\alpha$: ' + str(init_ts[-3]), fontsize=fs)
cost_txt = ax5.text(.05, .2, 'True cost: ' + str(true_cost), fontsize=fs)

writergif = animation.PillowWriter(fps=30)
anim = animation.FuncAnimation(fig, update, interval=100, frames=gen, save_count=3000)
anim.save('test_mpcc.gif', writer=writergif)

# plt.show()