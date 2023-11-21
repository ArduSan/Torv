#include <stdio.h>

int V[] = {6,3,5,1,4};

int main(int argc,char *argv){
	int temp;
	int j;
	int i=1;
	int n;
	for(n;n<5;n++){
		for(i;i<5;i++){
			temp = V[i];
			j=i;
			while((j>0)&&(V[j-1]>V[j])){
				V[j]=V[j-1];
				j=j-1;
			}
			V[j] = temp;
		}
	}
	for(i;i<5;i++){
		printf("%d\n",V[i]);
	}
	printf("%d\n",V[0]);
	printf("%d\n",V[1]);
	printf("%d\n",V[2]);
	printf("%d\n",V[3]);
	printf("%d\n",V[4]);
}

