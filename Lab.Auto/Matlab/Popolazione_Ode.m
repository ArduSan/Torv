x0 = [1 0 1]'; %Popolazione iniziale //stato iniziale 
A=[ -0.5 0 1; 0 -2 0.2; 0 -0.2 -2];
B=[ 1 0 -1, 0 0 1]';
u=0;
tspan=[0 30];
x_dot=A*x+B*u;

[t,x]=ode23(@(t,x) x_dot,tspan,x0);

plot(t,x,'-o','LineWidth',4)