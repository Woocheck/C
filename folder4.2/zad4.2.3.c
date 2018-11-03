/*
4.2.3 (r) Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę
całkowitą n oraz n-elementową tablicę tab o elementach typu
const int i zwraca jako wartość średnią arytmetyczną elementów
tablicy tab.
*/
#include <stdio.h>

float srednia(unsigned int n, const int *tab)
{
    float suma=0;
    for(int i=0; i<n; i++) suma+=tab[i];
    return suma/n;
}

int main(int argc, char const *argv[])
{
    int x=5;
    const int tablica[5]={1, 2, 3, 4, 5};
    printf("Srednia arytmetyczna: %f", srednia(x, tablica));
    return 0;
}
