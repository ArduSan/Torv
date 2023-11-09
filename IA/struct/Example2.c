#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct person{
	char *name;
	int age;
	float height;
	float weight;
};

struct person *person_create(char *name, int age, float height, float weight){
	struct person *who = malloc(sizeof(struct person));
	assert(who != NULL);
	who->name= strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	return who;
};

void person_destroy(struct person *who){
	assert(who != NULL);
	free(who->name);
	free(who);
}

void person_print(struct person*who){
	printf("Name: %s \n", who->name);
	printf("\tAge: %d \n", who->age);
	printf("\tHeight: %f \n", who->height);
	printf("\tweight: %f \n", who->weight);
}

int main(int argc,char **argv){
	//Creazione di due persone
	struct person *joe = person_create("Joe Alex", 32, 1.80, 64);
	struct person *frank = person_create("Frank Black", 20, 1.90, 72);
	
	printf("Joe is at memory location %p:\n",joe);
	person_print(joe);
	printf("Frank is at memory location %p:\n",frank);
	person_print(frank);


	joe->age += 20;
	joe->height -=2;
	joe->weight +=40;
	person_print(joe);

	frank->age += 20;
	frank->weight +=20;
        person_print(frank);
	
	//Liberazione della memoria allocata per le due persone
	person_destroy(joe);
	person_destroy(frank);
	
	return 0;
}	

