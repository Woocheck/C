/*
6.2.3 (r,!) Napisz funkcję, która dostaje jako argumenty wskaźnik do dwuwymiarowej
tablicy tablic elementów typu int oraz jej wymiary: dodatnie
liczby całkowite n i m, i usuwa z pamięci otrzymaną tablicę.
*/
#include <stdlib.h>
#include <stdio.h>

void nowa_tablica(int wiersze, int kolumny, int ** tablica)
{
    for(int i=0; i<wiersze; i++){
            free(tablica[i]);
        }
    free(tablica);

}

int main(int argc, char const *argv[])
{
    int tablica[10][10];
    nowa_tablica(10,10,(int**)tablica);
    return 0;
}
