function dydt = vp1(t,y)
%VDP1 Evaluete the van der pol odes for mu =1
%
%   See also ODE113,ODE23,ODE45.

dydt= [y(2);10*(1-y(1)^2)*y(2)-y(1)];