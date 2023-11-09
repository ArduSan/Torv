% modello di popolazione  x(k+1)=1.2*x(k)

x0 = [1 2 3 4]'; %Popolazione iniziale 
N=30;  %Durata della simulazione


A=[ 0 1 0 0; 0 0 1 0; 0 0 0 1; 1 0 0 0];
B=[ 0 0 0 1]';

% @definisce handle di funzione
g = @(k) (-1)^k;  %calcola u
f = @(x) A*x+B*g(k); %calcola x(k+1) 

%% Questo blocco di "calcolo" non va modificato
X = x0';  
x_ora=x0;

for k=0:N
    x_nuovo=f(x_ora);    %calcolo valore successivo
    X = [X; x_nuovo'];   %accumulazione
    x_ora = x_nuovo;     %aggiornamento del valore corrente 
end

%Visualizzazione
plot(0:N+1,X,'*-');%'k--*','LineWidth',5,'MarkerSize',18);