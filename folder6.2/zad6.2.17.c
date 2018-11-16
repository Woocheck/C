/*
6.2.17 (r) Napisz funkcję, która dostaje jako argumenty dwuwymiarową tablicę
tablic o elementach typu int oraz jej wymiary, i zwraca największą
spośród średnich wartości elementów poszczególnych wierszy.
Przyjmujemy, że dwa elementy leżą w tym samym wierszu, jeżeli mają
taki sam pierwszy indeks.
*/

#include <stdio.h>
#include <stdlib.h>

int max_av(int n, int m, int tablica[][100])
{
    int wiersz_max=0;
    float max_av=0, av=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            av+=tablica[i][j]; 
        }
        av=av/m;
        if(av>max_av)max_av=av;
    }
    return max_av;
}

int main()
{
    
    return 0;
}
