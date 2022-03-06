#include <stdio.h>

int main() {
	float arr[100], element;
	int i, n, location;
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		printf("Enter element %d: ", i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &element);
	printf("Enter the Location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &location);
	for(i = n - 1; i >= location - 1; i--)
		arr[i + 1] = arr[i];
	arr[location - 1] = element;
	printf("Array after insertion:\n");
	for(i = 0; i < n + 1; i++) {
		printf("%f ", arr[i]);
	}
	return 0;
}
