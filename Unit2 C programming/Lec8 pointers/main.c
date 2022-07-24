#include <stdio.h>
#include "string.h"
#include <stdlib.h>
#define MAXSIZE 10

struct SEmployee {
  char name[50];
  int id;
};

int main()
{
    //SIZE PART
    int size = 3;
    struct SEmployee *ptr_employees[3];
    // struct SEmployee *ptr_array = ptr_employees;
    struct SEmployee (*(*ptr_array)[3]) = &ptr_employees;
    int i;
    for(i = 0; i < size; i++) {
      printf("Employee[%d] name: ", i+1);
      scanf("%s", &(ptr_employees[i]->name));
      printf("Employee[%d] ID: ", i+1);
      scanf("%d", &(ptr_employees[i]->id));
    }
    printf("Employee Information: \n");
    //printf("%d", ptr_array[0].name);
    for(i = 0; i < size; i++) {
      printf("Employee[%d] name: %s\n", i+1, ptr_employees[i]->name);
      printf("Employee[%d] ID: %d\n", i+1, ptr_employees[i]->id);
    }
}












/*struct SEmployee emp1 = {"Alex", 1002}, emp2 = {"John", 1003},
                    emp3 = {"Sia", 1004};
  struct SEmployee *ptr_struct_arr[] = {&emp1, &emp2, &emp3};
  struct SEmployee *ptr_arr = (struct SEmployee*)ptr_struct_arr;
  int i;
  for(i = 0; i < 3; i++) {
    printf("ENTER\n");
    scanf("%d", &(*ptr_struct_arr)->id);
  }
  printf("\n\n\nM\n%d", (*ptr_struct_arr)->id);*/