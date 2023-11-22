#include <stdio.h>

int V[]={4,2,6,3};
int primo = 0;
int ultimo = 4;

void QuickSort(V,primo,ultimo){
	int k=perno(V,primo,ultimo);
	QuickSort(V,primo,k-1);
	QuickSort(V,k+1,ultimo);
}

int perno(V,primo,ultimo){
	int x = V[primo];
	int k = primo;
	int app;
	for(int i = primo; i<ultimo;i++){
		app= V[i];
		if(V[i]<x){
			k= k+1;
			V[i]=V[k];
			V[k]=app;
		}
	}
	V[primo]=V[k];
	V[k]=x;
	return k;
}

