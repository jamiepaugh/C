#include <stdio.h>
#include <string.h>
int main()
{
    char string[] = "XML";
    char stringReversed[strlen(string)];
    int i = 0;
    int step = strlen(string) - 1;
    for(i; i < strlen(string); i++)
    {
      stringReversed[i] = string[step];
      step--;
    }
    string[i] = '\0';
    
    printf("%s backwards is %s\n", string, stringReversed);
  
  return 0;
}
