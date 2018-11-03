/*
4.2.8 Napisz funkcję, która otrzymuje cztery argumenty: dodatnią liczbę
całkowitą n, n-elementowe tablice tab1 i tab2 oraz 2 · n-elementową
tablicę tab3 o elementach typu double.
a) Funkcja powinna przepisywać zawartość tablic tab1 i tab2 do tablicy
tab3 w taki sposób, że na początku tablicy tab3 powinny się
znaleźć elementy tablicy tab1, a po nich elementy tablicy tab2.
b) Funkcja powinna przepisywać zawartość tablic tab1 i tab2 do tablicy
tab3 w taki sposób, że w komórkach tablicy tab3 o nieparzystych
indeksach powinny się znaleźć elementy tablicy tab1,
a w komórkach tablicy tab3 o parzystych indeksach elementy tablicy
tab2.
*/
#include <stdlib.h>
#include <stdio.h>
#define N 10

void wstaw_po_kolei(int n, int *tab1, int *tab2, int *tab3)
{   
    for(int i=0; i<n; i++) tab3[i]=tab1[i];
    for(int i=n,j=0; i<2*n; i++, j++) tab3[i]=tab2[j];
}

void wstaw_naprzemiennie(int n, int *tab1, int *tab2, int *tab3)
{
    for(int i=0, j=1; i<(2*n)-1; i+=2, j+=2) {
        tab3[i]= tab1[i/2];
        tab3[j]=tab2[j/2];
    }
}

int main(int argc, char const *argv[])
{
    int n=N;
    int tab1[N]={1,1,1,1,1,1,1,1,1,1};
    int tab2[N]={2,2,2,2,2,2,2,2,2,2};
    int tab3[N*2];

    printf(" %d elementow tablicy tab1: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab1[i]);
    }
    printf("\n %d elementow tablicy tab2: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab2[i]);
    }

    wstaw_po_kolei(n, tab1, tab2, tab3);
    printf("\nZawartosc talbicy tab3 po dodaniu tab1 i tab2:");
    for(int i=0; i<2*n; i++){
        printf(" %d", tab3[i]);
    }

    wstaw_naprzemiennie(n, tab1, tab2, tab3);
    printf("\nZawartosc talbicy tab3 po wstawieniu naprzemiennie tab1 i tab2:");
    for(int i=0; i<2*n; i++){
        printf(" %d", tab3[i]);
    }

    return 0;
}
