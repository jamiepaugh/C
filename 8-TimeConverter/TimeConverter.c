#include <stdio.h>
#include <math.h>
int main()
  {
    int days = 1329;
    printf("Totals Days: %i\n", days);

    const int years = floor(days/365); 
    days -= years*365;
    printf("Years: %i\n", years);

    const int weeks = floor(days/7);
    days -= weeks * 7;
    printf("Weeks: %i\n", weeks);

    const int remainingDays = days;
    days -= remainingDays;
    printf("Days: %i\n", remainingDays);
  
    printf("Days remaining: %i\n", days);
  return 0;
}

