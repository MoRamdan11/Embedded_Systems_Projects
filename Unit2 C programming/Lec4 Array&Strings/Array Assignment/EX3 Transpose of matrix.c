#include <stdio.h>

int main() {
	float arr[100][100], arr_T[100][100];
	int nr, nc, i, j;
	printf("Enter rows and columns of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d", &nr, &nc);
	//Check number of rows in range (1 -100)
	while(nr > 100 || nr <= 0) {
		printf("Please enter number of rows in range(1 - 100)\n");
		fflush(stdin); fflush(stdout);
		scanf("%d", &nr);
	}
	//Check number of columns in range (1 -100)
	while(nc > 100 || nc <= 0) {
			printf("Please enter number of columns in range(1 - 100)\n");
			fflush(stdin); fflush(stdout);
			scanf("%d", &nc);
	}
	for(i = 0; i < nr; i++) {
		for(j = 0; j < nc; j++) {
			printf("Enter element a%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &arr[i][j]);
		}
	}
	printf("Entered Matrix:\n");
	for(i = 0; i < nr; i++) {
		for(j = 0; j < nc; j++) {
			printf("%f ", arr[i][j]);
			arr_T[j][i] = arr[i][j];
		}
		printf("\n");
	}
	printf("Transpose Of Matrix\n");
	for(i = 0; i < nc; i++) {
		for(j = 0; j < nr; j++) {
			printf("%f ", arr_T[i][j]);
		}
		printf("\n");
	}
	return 0;
}
