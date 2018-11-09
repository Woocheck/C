/*
7.2.18 (r,!) Zdefiniuj złożony typ danych dzięki któremu będzie można odnosić
się do kolejnych bajtów zmiennej typu unsigned int
jak do kolejnych elementów tablicy.
*/

#include <stdio.h>

union bajty {
    unsigned int value;
    char bit[4];
};


int main()
{   
  
   
    return 0;
}
