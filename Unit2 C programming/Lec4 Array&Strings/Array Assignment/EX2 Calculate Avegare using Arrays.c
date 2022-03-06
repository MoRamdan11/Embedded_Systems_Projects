#include <stdio.h>

int main() {
	int n, i;
	float arr[100], sum = 0, average;
	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	while(n <= 0 || n > 100) {
		printf("Please Enter n in range (1-100)\n");
		fflush(stdin); fflush(stdout);
		scanf("%d", &n);
	}
	for(i = 0; i < n; i++) {
		printf("%d. Enter number: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}
	for (i = 0; i < n; i++) {
		sum += arr[i];
	}
	average = sum / n;
	printf("Average = %f", average);
	return 0;
}
