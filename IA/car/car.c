#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct car{
	float peso;
	char *targa;
	int anno;
	int Km;
}Car;

Car *info(float peso, char *targa, int anno, int Km){
	Car *model;
	model = malloc(sizeof(Car));
	if(model == NULL) return (model);
	model->peso= peso;
	model->targa=targa;
	model->anno=anno;
	model->Km=Km;
	return(model);
}


void StampaInfoCar(Car *model){
	if(model == NULL) return;
	printf("peso: %f\n",model->peso);
	printf("\ttarga: %s",model->targa);
	printf("\tanno: %d",model->anno);
	printf("\tKm: %d",model->Km);
}

int main(int argc,char **argv){
	Car *nissan;
	nissan = info(81.5,"DZ525RH",2021,70000);
	StampaInfoCar(nissan);
	return 0;
}
