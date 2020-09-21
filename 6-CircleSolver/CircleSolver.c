#include <stdio.h>
#include <math.h>
int main()
{
  const double radius = 6.00;
  const double perimeter = 2 * M_PI * radius;
  const double area = M_PI * pow(radius, 2.0);

  puts("--CircleSolver.c--");
  printf("Radius    : %.3f\n", radius);
  printf("Perimeter : %.3f\n", perimeter);
  printf("Area      : %.3f\n", area);
}
