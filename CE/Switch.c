#include <stdio.h>

int main(int argc,char *argv[]){
	int i = 0;

	switch (argc){
		case 1:
			printf("hai un solo argomento \n");
			break;
		case 2 || 3 || 4:
			for(i =0; i<argc;i++){
				printf("%s ",argv[i]);
			}
			printf("\n");
			break;
		default:
			printf("you have too many arguments");
			break;
	}
}
