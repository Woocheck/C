/*
6.2.20 Napisz funkcję, która dostaje jako argumenty dwie dwuwymiarowe
tablice tablic o elementach typu int oraz ich wymiary, i zamienia
zawartości obu tablic.
*/

#include <stdio.h>
#include <stdlib.h>

void zamiana(int **tablica1, int **tablica2, int n, int m)
{
    int tmp=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            tmp=tablica2[i][j];
            tablica2[i][j]=tablica1[i][j];
            tablica1[i][j]=tmp;
        }
        
    }
    
}

int main()
{
    
    return 0;
}
