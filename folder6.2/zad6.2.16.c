/*
6.2.16 (r) Napisz funkcję, która dostaje jako argumenty dwuwymiarową tablicę
tablic o elementach typu int oraz jej wymiary, i zwraca jako
wartość indeks wiersza o największej średniej wartości elementów.
Przyjmujemy, że dwa elementy leżą w tym samym wierszu, jeżeli mają
taki sam pierwszy indeks.
*/

#include <stdio.h>
#include <stdlib.h>

int index_max_av(int n, int m, int tablica[][100])
{
    int wiersz_max=0;
    float max_av=0, av=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            av+=tablica[i][j]; 
        }
        av=av/m;
        if(av>max_av)wiersz_max=i;
    }
    return wiersz_max;
}

int main()
{
    
    return 0;
}
