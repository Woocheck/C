/*
4.2.6 Napisz funkcję, która otrzymuje trzy argumenty: dodatnią liczbę całkowitą
n oraz dwie n-elementowe tablice tab1, tab2 o elementach
typu int i:
a) (r) przepisuje zawartość tablicy tab1 do tablicy tab2,
b) przepisuje zawartość tablicy tab1 do tablicy tab2 w odwrotnej
kolejności (czyli element tab1[0] ma zostać zapisany do komórki
tablicy tab2 o indeksie n − 1).
*/
#include <stdlib.h>
#include <stdio.h>
#define N 10

void przepisz_do_tab2(int n, int *tab1, int *tab2)
{   
    for(int i=0; i<n; i++) tab2[i]=tab1[i];
}

void odwrotnie_do_tab2(int n, int *tab1, int *tab2)
{
    for(int j=0, i=n-1; i>=0; j++, i--) tab2[j]=tab1[i];
}
 

int main(int argc, char const *argv[])
{
    int n=N;
    int tab1[N]={1,2,3,4,5,6,7,8,9,10};
    int tab2[N]={0,0,0,0,0,0,0,0,0,0};

    printf(" %d elementow tablicy tab1: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab1[i]);
    }
    printf("\n %d elementow tablicy tab2: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab2[i]);
    }
    przepisz_do_tab2(n, tab1, tab2);
    printf("\nZawartosc talkicy tab1 po przpisaniu:");
    for(int i=0; i<n; i++){
        printf(" %d", tab2[i]);
    }

    odwrotnie_do_tab2(n, tab1, tab2);
    printf("\nZawartosc talkicy tab1 po odwuceniu kolejnosci:");
    for(int i=0; i<n; i++){
        printf(" %d", tab2[i]);
    }

    return 0;
}
