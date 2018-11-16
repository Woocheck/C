/*
6.2.4 (C,r) Napisz funkcję, która dostaje jako argumenty wskaźnik do tablicy
dwuwymiarowej elementów typu int oraz jej wymiary wymiary
n i m, i usuwa z pamięci otrzymaną tablicę.
*/
#include <stdlib.h>
#include <stdio.h>

void zwolnij(int n, int m, int *tablica[][10])
{
    
    free(tablica);

}

int main(int argc, char const *argv[])
{
    int tablica[10][10];
    nowa_tablica(10,10,(int**)tablica);
    return 0;
}
