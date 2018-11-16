/*
6.2.18 Napisz funkcję, która dostaje jako argument dwuwymiarową tablicę
tablic o elementach typu int oraz jej wymiary, i wypisuje jej zawartość
na standardowym wyjściu w taki sposób, żeby kolejne wiersze tablicy
zostały wypisane w oddzielnych wierszach standardowego wyjścia.
*/

#include <stdio.h>
#include <stdlib.h>

int drukuj_tablice(int n, int m, int tablica[][100])
{
    int wiersz_max=0;
    float max_av=0, av=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            printf("%d ", tablica[i][j]); 
        }
        printf("\n");
    }
    return max_av;
}

int main()
{
    
    return 0;
}
