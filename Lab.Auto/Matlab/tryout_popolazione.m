x0 = 10; %Popolazione iniziale //stato iniziale 
N= [0 50];  %Durata della simulazione       
r0=1.2;
%%non ode model calculus
%X=x0;
%x_ora=x0;

%f = @(x) r0*x;

%for k=0:N
    %x_nuovo = f(x_ora);
    %X=[X;x_nuovo'];
    %x_ora = x_nuovo;
%end

%plot(0:N+1,X,'-o','LineWidth',4)
%%ode Model

[t,y]=ode23(@(t,y) r0*y,N,x0);
plot(t,y,'-o','LineWidth',4)