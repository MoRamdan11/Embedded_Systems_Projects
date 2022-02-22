#include <stdio.h>

int main() {
	float n;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &n);
	if(n > 0)
		printf("%f is positive.", n);
	else if(n < 0)
		printf("%f is negative.", n);
	else
		printf("You entered zero.");
	return 0;
}
