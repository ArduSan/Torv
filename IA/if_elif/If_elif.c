#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
	int times,i;
	times=100;
	i=100;
	if (times > i){
		printf("Times è più grande \n");
	}else if(times == i){
		printf("Sono uguali \n");
	}else{
		printf("Times è più piccolo \n");
	}
	return(0);
}
