#include <stdio.h>
#include "string.h"

int main()
{
  char s[100];
  printf("Input a string: ");
  gets(s);
  char *ptr = s + strlen(s) - 1;
  printf("Reverse of the string is: ");
  while(ptr >= s) {
    printf("%c", *ptr);
    ptr--;
  }
}
