/*
6.2.19 (r) Napisz funkcję, która dostaje jako argumenty dwie dwuwymiarowe
tablice tablic o elementach typu int oraz ich wymiary, i przepisuje
zawartość pierwszej tablicy do drugiej tablicy.
*/

#include <stdio.h>
#include <stdlib.h>

void kopiowanie(int **tablica1, int **tablica2, int n, int m)
{
    
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            tablica2[i][j]=tablica1[i][j]; 
        }
        
    }
    
}

int main()
{
    
    return 0;
}
