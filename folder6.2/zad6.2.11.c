/*
6.2.11 Napisz funkcję, która dostaje w argumentach tablicę dwuwymiarową
elementów typu int, o pierwszym wymiarze podanym jako drugi argument
funkcji oraz drugim wymiarze równym 100, która to funkcja
zwraca jako wartość sumę wartości elementów tablicy.
*/

#include <stdio.h>
#include <stdlib.h>

int suma_elementow(int tablica[][100],int n)
{
    float suma=0;
    for(int i=0; i<n;i++)
        for(int j=0; j<100; j++){
            suma+=tablica[i][j];
        }

    return suma;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
