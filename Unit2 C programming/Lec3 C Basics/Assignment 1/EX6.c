#include <stdio.h>

int main() {
	double a, b, temp;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf", &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf", &b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %lf\n", a);
	printf("After swapping, value of b = %lf\n", b);
	return 0;
}
