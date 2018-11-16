/*
6.2.15 Napisz funkcję, która dostaje w argumentach dodatnią liczbę całkowitą
n oraz tablicę trójwymiarową o elementach typu int o wymiarach
n × 100 × 100, i zwraca jako wartość sumę wartości elementów otrzymanej
tablicy.
*/

#include <stdio.h>
#include <stdlib.h>

int suma_elementow(int n, int tablica[][100][100])
{
    float suma=0;
    for(int i=0; i<n;i++)
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
