/*
6.2.14 (r) Napisz funkcję, która dostaje w argumentach tablicę trójwymiarową
o elementach typu int o wymiarach 100 × 100 × 100, i zwraca
jako wartość sumę wartości elementów tablicy.
*/

#include <stdio.h>
#include <stdlib.h>

int suma_elementow(int tablica[100][100][100])
{
    float suma=0;
    for(int i=0; i<100;i++)
        for(int j=0; j<100; j++)
            for(int k=0;k<100;k++){
                suma+=tablica[i][j][k];
        }

    return suma;
}

int main()
{
    
    return 0;
}
