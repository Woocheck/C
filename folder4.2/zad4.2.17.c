/*
4.2.17 (*) Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę
całkowitą n oraz n-elementową tablicę tab o elementach typu double
a następnie tworzy kopię tablicy tab i zwraca jako wartość wskaźnik
do nowo utworzonej kopii.
*/
#include <stdlib.h>
#include <stdio.h>

#define N 10
double* kopia_tablicy(int n,double *tab)
{
    double* n_tab=(double*) malloc(n * sizeof(double));
    for(int i=0; i<n; i++){
        n_tab[i]=tab[i];
    }
    return n_tab;
}

void tab_del(double *tab)
{
    free(tab);
}

void drukuj_tablice(int n,double *tab1)
{
    printf("\n %d elementow tablicy: ", n);
    for(int i=0; i<n; i++){
        printf(" %.1f", tab1[i]);
    }
}
int main(int argc, char const *argv[])
{
    int n=N;
    double tab[N]={1,2,3,4,5,6,7,8,9,10};
    double *new_tab=NULL;    
    printf("tab1:");
    drukuj_tablice(n, tab);

    new_tab=kopia_tablicy(n, tab);
    printf("\nnew_tab:");
    drukuj_tablice(n,new_tab);
    tab_del(new_tab);

    return 0;
}
