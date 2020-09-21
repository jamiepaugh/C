#include <stdio.h>
int main()
{
  const int height    = 7;
  const int width     = 5;
  const int perimeter = (2*height) + (2*width);
  const int area      = height * width;

  puts("--RectangleSolver.c--");
  printf("Height: %i | Width: %i\n", height, width);
  printf("Perimeter : %i\n", perimeter);
  printf("Area      : %i\n", area);
}

