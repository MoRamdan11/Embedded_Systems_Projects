#include <stdio.h>
#include "string.h"

struct Sstudent {
	char name[50];
	int roll;
	float marks;
};
void displayStudent(struct Sstudent);

int main() {
	struct Sstudent s;
	printf("Enter information of student\n");
	printf("Enter name: ");
	fflush(stdin); fflush(stdout);
	gets(s.name);
	printf("Enter roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &s.roll);
	printf("Enter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &s.marks);
	displayStudent(s);
	return 0;
}

void displayStudent(struct Sstudent s) {
	printf("Displaying information\n");
	printf("Name: %s\n", s.name);
	printf("Roll: %d\n", s.roll);
	printf("Marks: %f\n", s.marks);
}
