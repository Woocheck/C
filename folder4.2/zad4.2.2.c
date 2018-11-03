/*
4.2.2 Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą
n oraz n-elementową tablicę tab o elementach typu int i zwraca
jako wartość:
a) (r) średnią arytmetyczną elementów tablicy tab.
b) sumę elementów tablicy tab,
c) sumę kwadratów elementów tablicy tab.
*/
#include <stdio.h>

float srednia(unsigned int n, int *tab)
{
    float suma=0;
    for(int i=0; i<n; i++) suma+=tab[i];
    return suma/n;
}

float suma(unsigned int n, int *tab)
{
    float suma=0;
    for(int i=0; i<n; i++) suma+=tab[i];
    return suma;
}

float kwadraty(unsigned int n, int *tab)
{
    float kwadraty=0;
    for(int i=0; i<n; i++) kwadraty+=tab[i]*tab[i];
    return kwadraty/n;
}