/*
6.2.21 (r) Napisz funkcję, która dostaje jako argumenty dwuwymiarową tablicę
tablic o elementach typu int oraz jej wymiary, i odwraca kolejność
elementów we wszystkich wierszach otrzymanej tablicy (przyjmujemy,
że dwa elementy tablicy leżą w tym samym wierszu, jeżeli
mają taką samą pierwszą współrzędną).
*/

#include <stdio.h>
#include <stdlib.h>

void odwroc(int **tablica, int n, int m)
{
    int tmp=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<(m/2); j++){
            tmp=tablica[i][j];
            tablica[i][j]=tablica[i][m-j];
            tablica[i][m-j]=tmp;
        }
        
    }
    
}

int main()
{
    
    return 0;
}
