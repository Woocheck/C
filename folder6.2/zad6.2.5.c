/*
6.2.5 Rozwiąż zadania 6.2.1 i 6.2.3 w wersji z trójwymiarowymi tablicami
tablic.

    6.2.1 (r,!) Napisz funkcję, która dostaje jako argument dodatnie liczby całkowite
n i m, tworzy dynamiczną dwuwymiarową tablicę tablic elementów
typu int o wymiarach n na m, i zwraca jako wartość wskaźnik
do niej.
*/
#include <stdlib.h>
#include <stdio.h>

int*** nowa_tablica(int x, int y,int z)
{   
    int ***tablica_int;

    tablica_int=(int***) malloc(x * sizeof(int**));
    for(int i=0; i<x; i++){
        tablica_int[i]=(int**) malloc(y * sizeof(int*));
        for(int j=0; j<y; j++){
            tablica_int[i][j]=(int*) malloc(z * sizeof(int));
        }
    }

    return tablica_int;
}
int main(int argc, char const *argv[])
{
    nowa_tablica(10,10,10);
    return 0;
}
