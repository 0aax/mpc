# Acados problems

## Overview
Acados tends to spit out this status message: `acados acados_ocp_solver returned status 2` when the target coordinates are far distances away from the original position. From the docs, status 2 means that the nlp solver's maximum number of iterations has been reached. I have tried setting the `ocp.solver_options.nlp_solver_max_iter` option to 400 rather than the default 100 to no avail.

> Sidenote: In the official acados racecar example, they simply ignore all status messages, save for printing some sentence like "abc returned status x during iteration y." Interestingly, in the minimal_ocp example, whenever the status is non-zero they raise an exception and exit the program. This seems to show that it is to be expected for the solver to return some non-zero statuses over the course of the simulation.

## Some things that have been tried
- Change `ocp.solver_options.nlp_solver_max_iter` from default 100 to 400
- Switching integrator type from `ERK` to `IRK`
- Reducing size of problem by making the time horizon `T` and number of control intervals `N` smaller (`T` from 10 to 1, `N` from 40 to `5`)
  - Make the ratio between `T` and `N` larger (`T=1, N=20`)
- Multiply `y_ref` by array of zeroes
- Set incremental `y_ref` values for each shooting node (`[xf*i/N, yf*i/N, 0, 0, 0, 0, 0]`)
- Adjusting weight values such that they are more uniform in magnitude
- Changing which variables are constrained. `x, y, phi` allowed to go to +/- infinity.

## Some things noticed
- Simulation ran to completion w/ far target in the following cases:
  - Uniform `y_ref` w/ `T=1, N=20`, `0 < v < 1`. Exception raised when `T=2` no matter how small the upper constraint on `v` was changed nor how large the `N` was made
  - Incremental `y_ref` w/ `T=1, N=20`, `0 < v < 2`. Exception raised when `T=2` no matter how large `N` was made.