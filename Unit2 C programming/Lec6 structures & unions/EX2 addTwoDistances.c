#include <stdio.h>
#include "string.h"

struct Sdistance {
	int feet;
	float inch;
};

struct Sdistance addDistances(struct Sdistance dist1, struct Sdistance dist2);
int main() {
	struct Sdistance dist1, dist2;
	printf("Enter information of 1st distance\n");
	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &dist1.feet);
	printf("Enter Inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &dist1.inch);
	printf("Enter information of 2nd distance\n");
	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &dist2.feet);
	printf("Enter Inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &dist2.inch);
	struct Sdistance sum = addDistances(dist1, dist2);
	printf("Sum of distances=%d'-%0.1f\"", sum.feet, sum.inch);
	return 0;
}

struct Sdistance addDistances(struct Sdistance dist1, struct Sdistance dist2) {
	struct Sdistance result;
	result.feet = dist1.feet + dist2.feet;
	result.inch = dist1.inch + dist2.inch;
	while(result.inch >= 12) {
		result.inch -= 12;
		result.feet++;
	}
	return result;
}
