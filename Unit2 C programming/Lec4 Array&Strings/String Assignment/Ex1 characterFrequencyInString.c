#include <stdio.h>
#include "string.h"

int main() {
	char str[100], c;
	int i, count = 0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	for(i = 0; i < strlen(str); i++) {
		if(str[i] == c)
			count++;
	}
	printf("Frequency of %c = %d", c, count);
	return 0;
}
