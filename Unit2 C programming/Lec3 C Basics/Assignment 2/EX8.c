#include <stdio.h>

int main() {
	char operator;
	float operand1, operand2;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operator);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &operand1, &operand2);
	switch(operator) {
	case '+': {
		printf("%f %c %f = %f", operand1, operator, operand2, (operand1 + operand2));
		break;
	}
	case '-': {
			printf("%f %c %f = %f", operand1, operator, operand2, (operand1 - operand2));
			break;
	}
	case '*': {
			printf("%f %c %f = %f", operand1, operator, operand2, (operand1 * operand2));
			break;
	}
	case '/': {
			printf("%f %c %f = %f", operand1, operator, operand2, (operand1 / operand2));
			break;
	}
	default: {
		printf("Invalid operator");
		break;
	}
	}
	return 0;
}
