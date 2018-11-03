/*
3.2.16 (r,!) Napisz funkcję, która dostaje dwa argumenty: wskaźnik na stałą
typu int i stały wskaźnik na zmienną typu int. I przepisuje zawartość
stałej wskazywanej przez pierwszy argument do zmiennej wskazywanej
przez drugi argument.
*/
#include <stdio.h>

void przekazanie(const int *x, int *y)
{
    *y=*x;
  
}
int main(int argc, char const *argv[])
{
    const int a=8;
    int b=5;
    printf("Podano dwie liczby a= %d i b= %d.\n",a , b);
    przekazanie(&a,&b);
    printf("Suma a i b ma wartosc: %d i %d.", a, b);

    return 0;
}