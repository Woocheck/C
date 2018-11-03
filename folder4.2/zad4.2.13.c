/*
4.2.13 (*,r,!) Napisz funkcję, która otrzymuje jako argument dodatnią liczbę
całkowitą n, a następnie tworzy dynamiczną n-elementową tablicę
o elementach typu int i zwraca jako wartość wskaźnik do jej pierwszego
elementu.
*/
#include <stdlib.h>
#include <stdio.h>
int* nowa_tablica(int n)
{
    int* tab=(int*) malloc(n * sizeof(int));
    return tab;
}
int main(int argc, char const *argv[])
{
    int n=10;
    int *new_tab=NULL;    

    new_tab=nowa_tablica(n);

    return 0;
}
