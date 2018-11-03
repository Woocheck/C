/*
4.2.15 (*,r,!) Napisz funkcję, która dostaje jako argument wskaźnik do jed
nowymiarowej dynamicznej tablicy o elementach typu int i zwalnia
pamięć zajmowaną przez przekazaną w argumencie tablicę.
*/
#include <stdlib.h>
#include <stdio.h>
int* nowa_tablica(int n)
{
    int* tab=(int*) malloc(n * sizeof(int));
    return tab;
}

void tab_del(int *tab)
{
    free(tab);
}

int main(int argc, char const *argv[])
{
    int n=10;
    int *new_tab=NULL;    

    new_tab=nowa_tablica(n);
    tab_del(new_tab);

    return 0;
}
