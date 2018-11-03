/*
3.2.1 (r) Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch
zmiennych typu int, która zwraca jako wartość mniejszą z liczb wskazywanych
przez argumenty.
*/
#include <stdio.h>

int wieksza(int *x, int *y)
{
    if(*x<*y){
        return *x;
    }
    else
    {
        return *y;
    }
}
int main(int argc, char const *argv[])
{
    int a=0, b=0;
    printf("Podaj dwie liczby a i b.");
    scanf(" %d %d", &a, &b);

    printf("Wieksza liczba ma wartosc: %d", wieksza( &a, &b));

    return 0;
}
