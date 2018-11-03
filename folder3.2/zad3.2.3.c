/*
3.2.3 (r) Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch
zmiennych typu int, która zamienia ze sobą wartości wskazywanych
zmiennych.
*/
#include <stdio.h>

void zamien(int *x, int *y)
{   
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
int main(int argc, char const *argv[])
{
    int a=0, b=0;
    printf("Podaj dwie liczby a i b: ");
    scanf(" %d %d", &a, &b);

    printf("Przed zamiana: a= %d  b= %d\n", a, b);
    zamien(&a, &b);
    printf("Po zamianie: a= %d  b= %d\n", a, b);

    return 0;
}