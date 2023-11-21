#include <stdio.h>
#include <stdbool.h>

int main(){
	int V[] = {6,3,5,1,4};
	bool change;
	change = true;
	int temp;
	while (change == true){
		change = false;
		for(int i;i<3;i++){
			temp=V[i];
			if (V[i] > V[i+1]){
				V[i] = V[i+1];
				V[i+1]=temp;
				change = true;
			}
		}
	}
	printf("%d\n",V[0]);
	printf("%d\n",V[1]);
	printf("%d\n",V[2]);
	printf("%d\n",V[3]);
	printf("%d\n",V[4]);
}
