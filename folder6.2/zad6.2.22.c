/*
6.2.22 (C, r) Napisz funkcję, która dostaje jako argumenty tablicę dwuwymiarową
o elementach typu int oraz jej wymiary, i odwraca kolejność
elementów we wszystkich wierszach otrzymanej tablicy (przyjmujemy,
że dwa elementy tablicy leżą w tym samym wierszu, jeżeli mają
taką samą pierwszą współrzędną).
*/

#include <stdio.h>
#include <stdlib.h>

void odwroc(int **tablica, int n, int m)
{
    int tmp=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<(m/2); j++){
            tmp=tablica[i][j];
            tablica[i][j]=tablica[i][m-j-1];
            tablica[i][m-j-1]=tmp;
        }
        
    }
    
}

int main()
{
    
    return 0;
}
