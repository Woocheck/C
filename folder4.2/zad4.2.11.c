/*
4.2.11 Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą
n oraz dwie n-elementowe tablice tab o elementach typu double
przechowujące n-wymiarowe wektory i zwraca jako wartość iloczyn
skalarny wektorów otrzymanych w argumentach.
*/
#include <stdio.h>
#define N 10


double iloczyn_skalarny(int n, double *tab1, double *tab2)
{
    double iloczyn_skalarny=0;
    for(int i=0; i<n; i++) iloczyn_skalarny+=(tab1[i]*tab2[i]);
    return iloczyn_skalarny;
}

void drukuj_tablice(int n, double *tab1, double *tab2)
{
    printf(" %.d elementow tablicy tab1: ", n);
    for(int i=0; i<n; i++){
        printf(" %.0f", tab1[i]);
    }
    printf("\n %.d elementow tablicy tab2: ", n);
    for(int i=0; i<n; i++){
        printf(" %.0f", tab2[i]);
    }
}

int main(int argc, char const *argv[])
{
    int n=N;
    double tab1[N]={11,21,1,1,11,2,1,1,3,1};
    double tab2[N]={2,6,5,2,2,21,2,22,82,24};

    drukuj_tablice(n, tab1, tab2);

    printf("\nIliczyn skalarny tab1 i tan2= %.0f", iloczyn_skalarny(n, tab1, tab2));

    return 0;
}
