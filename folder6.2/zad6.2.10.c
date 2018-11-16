/*
6.2.10 (C,r) Napisz funkcję, która dostaje w argumentach tablicę dwuwymiarową
elementów typu int oraz jej wymiary n i m, i wypełnia ją
zerami.
*/

#include <stdio.h>
#include <stdlib.h>

void zerowanie(int n, int m,int** tablica[][100])
{
    for(int i=0; i<n;i++)
        for(int j=0; j<m; j++){
            tablica[i][j]=0;
        }

    return tablica;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
