/*
6.2.23 (r,!) Napisz funkcję, która dostaje jako argumenty dwuwymiarową
tablicę tablic o elementach typu int oraz jej wymiary, i zmienia kolejność
wierszy w tablicy w taki sposób, że wiersz pierwszy ma się znaleźć
na miejscu drugiego, wiersz drugi ma się znaleźć na miejscu trzeciego
itd., natomiast ostatni wiersz ma się znaleźć na miejscu pierwszego
(przyjmujemy, że dwa elementy tablicy leżą w tym samym wierszu
jeżeli mają taką samą pierwszą współrzędną).
*/

#include <stdio.h>
#include <stdlib.h>

void odwroc(int **tablica, int n, int m)
{
    int tmp=0;
    for(int i=0; i<m;i++){
        tmp=tablica[n-1][i];
        for(int j=n-1; j>0; j--){
            tablica[j][i]=tablica[j-1][i];  
        }
        tablica[0][i]=tmp;
    }
    
}

int main()
{
    
    return 0;
}
