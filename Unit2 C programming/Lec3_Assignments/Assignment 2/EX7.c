#include <stdio.h>

int main() {
	int n, result = 1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	if (n < 0)
		printf("Error!!! Factorial of negative number doesn't exist.");
	else {
		for(int i = 1; i <= n; i++)
			result *= i;
		printf("Factorial = %d", result);
	}
	return 0;
}
