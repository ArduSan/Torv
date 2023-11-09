#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


typedef struct person{
	char *name;
	int age;
	float height;
	float weight;
}Person;

Person *create(char *name, int age, float height, float weight){
	Person *who;
	who = (Person *) malloc(sizeof(Person));
	if (who == NULL) return(who);
	who->name=name;
	who->age=age;
	who->height=height;
	who->weight=weight;
	return (who);
}
void stampa(Person *who){
	if(who == NULL) return;
	printf("Nome: %s\n", who->name);
}

int main(int argc, char **argv){
	Person *joe;
	joe= create("joe",12,1.8,81.2);
	stampa(joe);

}

