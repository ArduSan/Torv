x0 = [0 0 0]';           %stato iniziale 
tspan = [0 30];          %spazio di controllo   
Y = [];                  %matrice che conterrà i risultati di Y nel tempo
U=[];                    %matrice che conterrà i risultati di U nel tempo
u = @(t) [ 2*sin(3*t); 1];       %creo una funzione anonima per gestire u nel tempo

[t,X] =ode23(@f ,tspan ,x0);  %ode23 per il cambiamento degli stati 

%for che permette di costruire le matrici soluzioni di Y e U nel tempo
for k = 1:size(X,1)          
    
    x_ora = X(k, :)';  %assegno ad x_ora il valore k-esimo di X colonna

    C=[1 0 0; 0 1 -1];
    D=[0 0; 0 0];

    u_ora = u(k);      %assegno ad u_ora il valore di u in questo istante t

    y_ora = (C*x_ora)+ (D*u_ora); %assegno ad y_ora il suo valore
    Y= [Y;y_ora'];      %costruisco una matrice per salvare gli stati regressi
    U= [U;u_ora'];
end

figure(1);           %plot di X rispetto al tempo
plot(t,X)
xlabel('Tempo');
ylabel('X');

figure(2);           %plot di Y rispetto al tempo
plot(t,Y)
xlabel('Tempo');
ylabel('Y');

figure(3);          %plot di U rispetto al tempo
plot(t,U)
xlabel('Tempo');
ylabel('U');

figure(4);           %plot Y1 rispetto ad Y2 
plot(Y(:, 1), Y(:, 2))
xlabel('Y1');
ylabel('Y2');

figure(5);            %plot Y in 3 dimensioni 
comet3(t,Y(:, 1), Y(:, 2))
xlabel('Tempo');
ylabel('Y1');
zlabel('Y2');

function X = f(t,x)    %costruisco la funzione di handle di X per la ode23
    u=[ 2*sin(3*t); 1];
    A=[ -0.5 0 1; 0 -2 0.2; 0 -0.2 -2];
    B=[ 1 0 -1; 0 0 1]';
    X = (A*x)+(B*u);
    
end



