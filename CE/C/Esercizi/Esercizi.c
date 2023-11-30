#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const float pi=3.14;


//###########  Esercizio 1  ####################
float media(){
	int n=0;
	int count=0;
	int A;
	int sum;
	float med=0;
	while(n==0){
		A=0;
		printf("Inserire numero con il quale fare la media, per uscire dal conteggio inserire 0 \n ");
		scanf("%d",&A);
		count += 1;
		if(A==0){
			n=1;
			count-=1;
		}

		sum=sum+A;
	}
	med = (float)sum /count;
	return med;


}

//###########  Esercizio 2  ####################

int operation(){
	int A=0;
	int B=0;
	printf("inserire i due numeri con i quali operare\n :");
	scanf("%d %d",&A,&B);
	int Op=0;
	int Sum=A+B;
	int Sub=A-B;
	int molt=A*B;
	float Div =(float)A/B;
	while(Op == 0){
		printf("\nDichiare il tipo di operazione:\n-1 Somma\n-2 Sottrazione\n-3 Moltiplicazione\n-4 Divisione\n");
        	scanf("%d",&Op);
		switch (Op){
			case 1:
				printf("la somma è:%d ",Sum);
				puts("");
				break;
			case 2:
				printf("la sottrazione è:%d ",Sub);
				puts("");
				break;
			case 3:
				printf("la moltiplicazione è:%d ",molt);
				puts("");
				break;
			case 4:
				printf("la divisione è:%lf ",Div);
				puts("");
				break;
			default: 
				printf("ha inserito un numero diverso dalle specifiche, perfavore ritenti seguento le regole");
				puts("");
				break;
		}
	}
	return 0;
}

//############ Esercizio 3 ######################
void quad_cerc_triang(){
	float R=0;
	printf("inserire un valore reale R: ");
	scanf("%f",&R);
	float raggio = (float)R/2;
	float area_quad = R*R;
	float area_cerc = (2*pi)*(raggio*raggio);
	float area_triang =(float)(sqrt(3)/4)*area_quad;
	printf("\narea quadrato lato R:%f ",area_quad);
	puts("");
	printf("area cerchio diametro R: %f \n",area_cerc);
	printf("area tringolo equilatero di lato R: %f \n",area_triang); 

}
//############ Esercizio 4 ######################
void check_sign(){
	int x=0;
	printf("inserisci il numero del quale vuoi sapere il segno: ");
	scanf("%d",&x);
	if(x<0){
		printf("il tuo numero è negativo\n");
	}else if (x>0){
		printf("il tuo numero è positivo\n");
	}else{
		printf("domanda filosofica\n");
	}
}


//########### Esercizio 5  #####################
void assoluto(){
	int x=0;
	printf("inserire il numero del quale si vuole ricavare l'assoluto: ");
	scanf("%d",&x);
	printf("%d",abs(x));
	puts("");
}
//########### Esercizio 6  #####################
void equation(){
	int a=0;
	int b=0;
	float x=0;
	printf("inserire il valore del coefficente angolare: ");
	scanf("%d",&a);
	printf("inserire il valore di q della retta: ");
	scanf("%d",&b);
	x=(float)-b/a;
	printf("\nx vale: %f\n",x);
}
//########### Esercizio 7  ####################



int main(int argc, char *argv[]){
	//operation();
	//quad_cerc_triang();
	//check_sign();
	//assoluto();
	equation();
}
