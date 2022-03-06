#include <stdio.h>

int main() {
	float n1, n2, product;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &n1, &n2);
	product = n1 * n2;
	printf("Product: %f", product);
	return 0;
}
