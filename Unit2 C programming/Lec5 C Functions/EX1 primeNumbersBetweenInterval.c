#include <stdio.h>
_Bool isPrime(int n);
void printPrimes(int a, int b);

int main() {
	int a, b;
	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d", &a, &b);
	printf("Prime numbers between %d and %d are: ", a, b);
	printPrimes(a, b);
	return 0;
}

_Bool isPrime(int n) {
	int i;
	for(i = 2; i < n / 2; i++) {
		if(n % i == 0)
			return 0;
	}
	return 1;
}

void printPrimes(int a, int b) {
	int i;
	int front = a <= b? a : b;
	int dead  = b >= a? b : a;
	for(i = front + 1; i < dead; i++) {
		if(isPrime(i))
			printf("%d ", i);
	}
}
