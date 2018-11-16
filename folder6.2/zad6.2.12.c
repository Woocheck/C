/*
6.2.12 Napisz funkcję, która dostaje w argumentach dwuwymiarową tablicę
tablic o elementach typu int oraz jej wymiary n i m, i zwraca jako
wartość sumę wartości elementów tablicy.
*/

#include <stdio.h>
#include <stdlib.h>

int suma_elementow(int n, int m,int tablica[][100])
{
    float suma=0;
    for(int i=0; i<n;i++)
        for(int j=0; j<m; j++){
            suma+=tablica[i][j];
        }

    return suma;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
