/*
4.2.18 (*) Napisz funkcję, która otrzymuje trzy argumenty: dodatnią liczbę
całkowitą n oraz dwie tablice n-elementowe o elementach typu int
przechowujące współrzędne wektorów i zwraca jako wartość wskaźnik
do pierwszego elementu nowo utworzonej tablicy przechowującej sumę
wektorów otrzymanych w argumentach.
*/
#include <stdlib.h>
#include <stdio.h>

#define N 10

int* nowa_tablica(int n,int *tab1,int *tab2)
{
    int* n_tab=(int*) malloc(2 * n * sizeof(int));
    for(int i=0; i<n; i++){
        n_tab[i]=tab1[i];
    }
    for(int i=n; i<2*n; i++){
        n_tab[i]=tab2[i-n];
    }
    
    return n_tab;
}

void tab_del(int *tab)
{
    free(tab);
}

void drukuj_tablice(int n,int *tab)
{
    printf("\n %d elementow tablicy: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab[i]);
    }
}
int main(int argc, char const *argv[])
{
    int n=N;
    int tab1[N]={1,1,1,1,1,1,1,1,1,1};
    int tab2[N]={2,2,2,2,2,2,2,2,2,2};
    int *new_tab=NULL;    
    printf("tab1:");
    drukuj_tablice(n, tab1);
    printf("\ntab2:");
    drukuj_tablice(n, tab2);

    new_tab=nowa_tablica(n, tab1, tab2);
    printf("\nnew_tab:");
    drukuj_tablice(2*n, new_tab);
    tab_del(new_tab);

    return 0;
}
