#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <float.h>

#define N  10

void init(int n,  int **v)
{
  int i;
  int *temp;
  temp=(int *) malloc(n*sizeof(int));

  if (temp == NULL) {
    printf("malloc ha fallito!!!\n");
  } else  {
    
    for (i=0; i<n; i++) {
      temp[i] = i ;
      printf("%d   %d \n",i, temp[i]);
    }
  }
  *v=temp;
}



int main(int argc, char **argv)
{
  int *a=NULL, b, c, n,i, *v=NULL;
  
  n = 8;

  
  init(n,&v);
  fprintf(stderr,"Done init\n");
  for (i=0; i<n; i++)
    printf("%d   %d \n",i, v[i]);
  

  
  return(0);
    
}
