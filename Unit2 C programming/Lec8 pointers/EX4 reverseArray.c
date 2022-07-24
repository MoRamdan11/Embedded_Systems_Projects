#include <stdio.h>
#include "string.h"
#define MAXARRAY 15

void printArrayReverse(int arr[], int size);

int main()
{
  int arr[MAXARRAY], size, i;
  printf("Input the number of elements to store in the array (max 15): ");
  fflush(stdin); fflush(stdout);
  scanf("%d", &size);
  printf("Input 5 number of elements in the array:\n");
  for(i = 0; i < size; i++) {
    printf("element - %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  printArrayReverse(arr, size);
}

void printArrayReverse(int arr[], int size) {
  int *ptr = arr + size - 1, i;
  printf("The elements of array in reverse order are: \n");
  for (i = size - 1; i >= 0; i--, ptr--)
  {
    printf("element - %d: %d\n", i + 1, *ptr);
  }
  
}