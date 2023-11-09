#include <stdio.h>
#include <stdlib.h>

//ottenere memoria con malloc
//void malloc(size_t size)
//malloc potrebbe fallire in 2 casi, chiedi un numero di byte negativo o la memoria è già tutta occupata
//Esempio se abbiamo bisogno di un ararey di n namuri interi possiamo eseguire:

void esempio1(){
    int *a,n,i;
    n= 8;
    a = (int *) malloc(n*sizeof(int));
    if(a == NULL){                                     //if per gestire caso di errore di malloc 
        printf("malloc ha fallito!!! \n");
    }else{
        for (i=0; i<n;i++){
            a[i]=i;
        }
        printf("%d     %d \n",*(a+4), a[4]);
        free(a);                                      //libero la cella di memoria utilizzata 
    }

}



//ottenere memoria con free
//void free(void *ptr)

//
void esempio2(){

}

int main(int argc, char **argv){
    esempio1();
}