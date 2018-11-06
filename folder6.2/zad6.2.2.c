/*
6.2.2 (C,r,!) Napisz funkcję, która dostaje jako argument dodatnie liczby
całkowite n i m, tworzy dynamiczną dwuwymiarową tablicę elementów
typu int o wymiarach n na m i zwraca jako wartość wskaźnik do niej.
*/
#include <stdlib.h>
#include <stdio.h>

int** nowa_tablica(int wiersze, int kolumny)
{
    int **tablica;
    tablica=(int**) malloc(wiersze * sizeof(int*));
    for(int i=0; i<wiersze; i++){
        tablica[i]=(int*) malloc(kolumny * sizeof(int));
    }

    return tablica;
}
int main(int argc, char const *argv[])
{
    nowa_tablica(10,10);
    return 0;
}
