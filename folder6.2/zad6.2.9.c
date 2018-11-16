/*
6.2.9 (r) Napisz funkcję, która dostaje w argumentach dwuwymiarową tablicę
tablic elementów typu int oraz jej wymiary n i m, i wypełnia ją
zerami.
*/

#include <stdio.h>
#include <stdlib.h>

void zerowanie(int** tablica, int n, int m)
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
