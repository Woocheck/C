/*
3.2.2 (r) Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch
zmiennych typu int, która zwraca jako wartość wskaźnik na zmienną
przechowującą mniejszą z liczb wskazywanych przez argumenty.
*/
#include <stdio.h>

int *wieksza(int *x, int *y)
{   
    int *ptr;
    if(*x>*y){
        ptr = x;
    }
    else
    {
        ptr = y;
    }
    return ptr;
}
int main(int argc, char const *argv[])
{
    int a=0, b=0;
    printf("Podaj dwie liczby a i b: ");
    scanf(" %d %d", &a, &b);

    int *ptr_x, *ptr_y;
    ptr_x= &a;
    ptr_y= &b;

    printf("Wieksza liczba ma wartosc: %d", *wieksza(&a, &b));

    return 0;
}