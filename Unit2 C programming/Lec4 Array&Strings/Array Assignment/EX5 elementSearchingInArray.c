#include <stdio.h>

int main() {
	float arr[100], element;
	int n, i, elementLocation;
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	//Check n is in range (0 - 100)
	while(n > 100 || n <= 0) {
		printf("Enter valid no of elements in range(1 - 100)\n");
		fflush(stdin); fflush(stdout);
		scanf("%d", &n);
	}
	for(i = 0; i < n; i++)
	{
		printf("Enter element: %d ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}
	printf("Enter element to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &element);
	for(i = 0; i < n; i++) {
		if(arr[i] == element) {
			elementLocation = i;
			printf("Number found at the location %d", elementLocation + 1);
			break;
		}
	}
	if(i == n)
		printf("Element hasn't been found!");
	return 0;
}
