/*
6.2.8 (r) Napisz funkcję, która dostaje w argumentach dwuwymiarową tablicę
elementów typu int, o pierwszym wymiarze podanym jako drugi
argument funkcji oraz drugim wymiarze równym 100 i wypełnia ją
zerami.
*/

#include <stdio.h>
#include <stdlib.h>

void zerowanie(int *tablica[][100], int n)
{
    for(int i=0; i<n;i++)
        for(int j=0; j<100; j++){
            tablica[i][j]=0;
        }

    return tablica;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
