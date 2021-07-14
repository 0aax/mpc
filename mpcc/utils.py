import casadi as cd

def gen_t(pts1, pts2):
    tpts = [0]
    for i, pt in enumerate(pts1):
        if i != 0:
            dist_tmp = (pts1[i] - pts1[i-1]) ** 2 + (pts2[i] - pts2[i-1]) ** 2
            tpts += [cd.sqrt(dist_tmp) + tpts[-1]]
    maxt = tpts[-1]
    tpts = [t/maxt for t in tpts]
    return tpts

def compute_step(init, ts, D): # init = [x, y, phi, delta, vx, theta, alphaux, aux, dt]
    x, y, phi, delta, v, theta, alpha, a, dt = init
    
    x_ts = x + v*cd.cos(phi)*ts
    y_ts = y + v*cd.sin(phi)*ts
    phi_ts = phi + (v/D)*cd.tan(delta)*ts
    delta_ts = delta + alpha*ts
    v_ts = v + a*ts
    theta_ts = theta + v*dt*ts

    return [x_ts, y_ts, phi_ts, delta_ts, v_ts, theta_ts]

def compute_cost_step(init, cost_func, xc, yc, ts):
    x, y, phi, delta, v, theta, alpha, a, dt = init
    cost = cost_func(pos=cd.vertcat(x, y), a=a, alpha=alpha, dt=dt, t=theta, t_dest=1.0, cx=xc, cy=yc)['cost']*ts
    return cost

def merge_dict(x, y):
    z = x.copy()
    z.update(y)
    return z