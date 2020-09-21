#include <stdio.h>
int main()
{
    #if __STDC_VERSION__ >=  201710L
        puts("Compiler Version: C18");
    #elif __STDC_VERSION__ >= 201112L
        puts("Compiler Version: C11");
    #elif __STDC_VERSION__ >= 199901L
        puts("Compiler Version: C99");
    #else
        puts("Compiler Version: C89/C90");
    #endif

  return 0;
}
