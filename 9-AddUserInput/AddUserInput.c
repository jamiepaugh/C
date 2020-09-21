#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int readInteger();
int main()
  {
    int number1 = readInteger();
    int number2 = readInteger();

    printf("%i + %i = %i\n", number1, number2, number1 + number2);

  return 0;
}

int readInteger()
{
    const int MAX_INT_DIGITS = 10;

    printf("Please input integer: ");
    char string[MAX_INT_DIGITS];
    fgets(string, sizeof(string), stdin);

    if(string[strlen(string) - 1] == '\n')
    {
        string[strlen(string) - 1] = '\0';
    }
    else
    {
        while(getchar() != '\n');
    }

    int number = atoi(string);
    return number;
}
