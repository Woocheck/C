/*
4.2.4 (*) Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę
całkowitą n oraz n-elementową tablicę tab o elementach typu
unsigned int i zwraca jako wartość średnią geometryczną elementów
tablicy tab.
*/
#include <stdio.h>
#include <math.h>

double srednia(unsigned int n, unsigned int *tab)
{
    int iloczyn=1;
    for(int i=0; i<n; i++) iloczyn*=tab[i];
    return pow(iloczyn, (1/(double)n));
}

int main(int argc, char const *argv[])
{
    int x=5;
    unsigned int tablica[5]={1, 2, 3, 4, 5};
    printf("Srednia geometryczna: %f", srednia(x, tablica));
    return 0;
}
