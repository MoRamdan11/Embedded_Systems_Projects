#include <stdio.h>

int main()
{
  char c = 'A';
  char *ptr = &c;
  printf("The Alphabets are:\n");
  while(*ptr <= 'Z') {
    printf("%c ", *ptr);
    (*ptr)++;
  }
}
