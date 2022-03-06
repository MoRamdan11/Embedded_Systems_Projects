#include <stdio.h>

int main() {
	float a[2][2], b[2][2];
	int i, j;
	printf("Enter elements of 1st matrix\n");
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("Enter a%d%d: ", i, j);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}
	printf("Enter elements of 2nd matrix\n");
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("Enter element b%d%d: ", i, j);
			fflush(stdin); fflush(stdout);
			scanf("%f", &b[i][j]);
		}
	}
	printf("Sum Of Matrix:\n");
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("%f ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
