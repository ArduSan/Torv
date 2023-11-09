#include <stdio.h>
#include <string.h>

struct Student{
	char name[50];
	int age;
	float gpa;
};

int main(){
	struct Student student1;
	strcpy(student1.name, "Alice");
	student1.age = 20;
	student1.gpa = 3.5;

	printf("Nome: %s \n", student1.name);
	printf("Eta : %d \n", student1.age);
	printf("GPA : %.2f \n",student1.gpa);

	return 0;
}

