/*
3.2.5 Napisz funkcję, której argumentami są dwa wskaźniki do stałych typu
int, zaś zwracaną wartością jest suma wartości zmiennych wskazywanych
przez argumenty.
*/
#include <stdio.h>

int suma(const int *x,const int *y)
{
   return (*x)+(*y);
}
int main(int argc, char const *argv[])
{
    const int a=8, b=5;
    printf("Podano dwie liczby a= %d i b= %d.\n",a , b);

    printf("Suma a i b ma wartosc: %d", suma( &a, &b));

    return 0;
}