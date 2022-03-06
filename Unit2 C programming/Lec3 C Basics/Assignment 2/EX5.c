#include <stdio.h>

int main() {
	char c;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	//From ASCII table 'A': 65, 'Z': 90, 'a': 97, 'z': 122
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		printf("%c is an alphabet", c);
	else
		printf("%c is not an alphabet", c);
	return 0;
}
