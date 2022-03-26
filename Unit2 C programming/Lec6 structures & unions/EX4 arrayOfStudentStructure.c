#include <stdio.h>
#include "string.h"

struct Sstudent{
	char name[50];
	int roll;
	float marks;
};

void getStudentsInfo(struct Sstudent students[], int length);
void displayStudentsInfo(struct Sstudent students[], int length);

int main() {
	struct Sstudent students[10];
	getStudentsInfo(students, 10);
	displayStudentsInfo(students, 10);
	return 0;
}

void getStudentsInfo(struct Sstudent students[], int length) {
	int i;
	printf("Enter information of students\n");
	for(i = 0; i < length; i++) {
		printf("For role number %d\n", i + 1);
		students[i].roll = i + 1;
		printf("Enter name: ");
		fflush(stdin); fflush(stdout);
		gets(students[i].name);
		printf("Enter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &students[i].marks);
	}
}

void displayStudentsInfo(struct Sstudent students[], int length) {
	int i;
	printf("Displaying information of students\n");
	for(i = 0; i < length; i++) {
		printf("Information for roll number %d:\n", students[i].roll);
		printf("Name: %s\n", students[i].name);
		printf("Marks: %f\n", students[i].marks);
	}
}
