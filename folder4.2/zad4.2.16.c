/*
4.2.16 (*) Napisz funkcję, która dostaje jako argument wskaźnik do jednowymiarowej
dynamicznej tablicy o elementach typu double i zwalnia
pamięć zajmowaną przez przekazaną w argumencie tablicę.
*/
#include <stdlib.h>
#include <stdio.h>
double* nowa_tablica(int n)
{
    double* tab=(double*) malloc(n * sizeof(double));
    return tab;
}

void tab_del(double *tab)
{
    free(tab);
}

int main(int argc, char const *argv[])
{
    int n=10;
    double *new_tab=NULL;    

    new_tab=nowa_tablica(n);
    tab_del(new_tab);

    return 0;
}
