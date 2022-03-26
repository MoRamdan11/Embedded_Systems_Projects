#include <stdio.h>

struct Scomplex {
	float real;
	float imag;
};

struct Scomplex addComplex(struct Scomplex num1, struct Scomplex num2);

int main() {
	struct Scomplex num1, num2, sum;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f", &num1.real, &num1.imag);
	printf("For 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f", &num2.real, &num2.imag);
	sum = addComplex(num1, num2);
	printf("Sum=%.1f+%.1fi", sum.real, sum.imag);
	return 0;
}

struct Scomplex addComplex(struct Scomplex num1, struct Scomplex num2) {
	struct Scomplex result;
	result.real = num1.real + num2.real;
	result.imag = num1.imag + num2.imag;
	return result;
}
