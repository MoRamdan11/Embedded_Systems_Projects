#include <stdio.h>

int calcPower(int base, int power);

int main() {
	int base, power;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &base);
	printf("Enter power number(positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &power);
	//Check power is a positive number
	while(power < 0) {
		printf("Please enter positive power value\n");
		scanf("%d", &power);
	}
	printf("%d^%d = %d", base, power, calcPower(base, power));
	return 0;
}

int calcPower(int base, int power) {
	if(power == 0)
		return 1;
	return base * calcPower(base, power - 1);
}
