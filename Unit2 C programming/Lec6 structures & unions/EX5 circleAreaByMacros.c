#include <stdio.h>

#define circleArea(r) 3.14 * r * r

int main() {
  float radius;
  printf("Enter the radius: ");
  fflush(stdin); fflush(stdout);
  scanf("%f", &radius);
  printf("Area of circle is %f\n", circleArea(radius));
  return 0;
}
