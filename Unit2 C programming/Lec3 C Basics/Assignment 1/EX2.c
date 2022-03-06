#include <stdio.h>

int main() {
	int n;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	printf("You entered: %d", n);
	return 0;
}
