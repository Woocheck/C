/*
6.2.7 (r) Napisz funkcję, która dostaje jako argument dodatnią liczbę całkowitą
n, tworzy dynamiczną dwuwymiarową trójkątną tablicę tablic
elementów typu int o wymiarach n na n i zwraca jako wartość wskaźnik
do niej.
*/

#include <stdio.h>
#include <stdlib.h>

int** tablica_trojkat(int n)
{
    int **tablica= (int**) malloc(n* sizeof(int));
    for(int i=1; i<=n; i++)
    {
        tablica[i]=(int*) malloc(i*sizeof(int));
    }

    return tablica;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
