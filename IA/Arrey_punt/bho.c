//info sugli arrey : caratteristica 1-tutti i dati all'interno di un arrey sono dello stesso tipo
//                                  2-sono tutti chiamabili tramite 1 o piu indici numerici 
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <float.h>

#define N 10
#define T 6

//int main (int argc, char **argv){
//    int i,j; 
//    int V[N];
//    for (i=0; i<N; i++) {
//        V[i] =sqrt((float)i);
//        printf ("V[%d]: %g \n",i,V[i]);
//    }
//   string();
    
//    return(0);
//}

void string(){
    char name[T];
    name[0] = 'p';
    name[1] = 'i';
    name[2] = 'p';
    name[3] = 'p';
    name[4] = 'o';
    name[5] = '\0';
    printf("%s\n",name);
}

//passare un arrey ad una funzione 
//modo tradizionale con un puntatore
//modo "moderno" usando lo standard c99 e seguenti 
//void fill(int m, int n, int a[n][m]):




//puntatori
/*void fill(int m, int *a){        //*a è un puntatore
    int i,j;
    for (i=0; i<m ; i++){
    a[i]=i;
    }

}*/

////

int main(int argc,char **argv){
    int *a,b,c;

    a=&b;
    b=10;
    c=32;

    printf ("%d      %d \n",b,a); //con asterisco a mi riferisco alla cella alla quale punta a, in questo caso ho reso a uguale al contenuto della cella di b, quindi il puntatore di a punta b 
    
    a=&c;
    printf ("%d      %d \n",b,*a);
    printf ("%d      %d \n",c,*a);
}

//con i puntatori ho quindi una variabile che puo rappresentare sia il suo indirizzo che il contenuto della cella di quel determinato indirizzo

//posso anche spostarmi sull celle, ad esemipo:

void Spost(){
    
    int *ptr,val;
    val = *ptr;
    int *ptr = &val;
    val = *(ptr+1);

}

