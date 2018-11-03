/*
4.2.12 Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą
n oraz n-elementową tablicę tab o elementach typu int i:
a) (r) odwraca kolejność elementów tablicy tab.
b) (r) przesuwa o jeden w lewo wszystkie elementy tablicy
(tak, żeby wartość elementu o indeksie n − 1 znalazła się w elemencie
o indeksie n−2, wartość elementu o indeksie n−2 znalazła
się w elemencie o indeksie n − 3, zaś wartość elementu o indeksie
0 w elemencie o indeksie n − 1),
c) (r,!) przesuwa o jeden w prawo wszystkie elementy tablicy
(tak, żeby wartość elementu o indeksie 0 znalazła się w elemencie
o indeksie 1, wartość elementu o indeksie 1 znalazła się w elemencie
o indeksie 2, zaś wartość elementu o indeksie n − 1 w elemencie
o indeksie 0),
d) (*,r,!) sortuje rosnąco elementy tablicy tab (porządkuje elementy
przechowywane w tablicy w taki sposób aby ciąg
tab[0], tab[1],. . . ,tab[n-1] był ciągiem niemalejącym),
e) sortuje malejąco elementy tablicy tab.
*/
#include <stdio.h>
#define N 10

void zamien (int *element1, int *element2)
{
    int tmp;
    tmp=*element1;
    *element1=*element2;
    *element2=tmp;
}
int max(int n, int *tab)
{   int index_max=0;
    for(int j=1; j<n; j++){
            if(tab[j]>tab[index_max]) index_max=j;
    }
    return index_max;
}
int min(int n, int *tab)
{   int index_min=0;
    for(int j=1; j<n; j++){
            if(tab[j]<tab[index_min]) index_min=j;
    }
    return index_min;
}

void drukuj_tablice(int n,int *tab1)
{
    printf("\n %d elementow tablicy tab1: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab1[i]);
    }
}
void funkcja(int n, int *tab)
{
    int tmp=0;
    //odwroc tablice
    for(int i=0; i<n/2; i++){
        tmp=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=tmp;
    }
    printf("\nOdwrocona: ");
    drukuj_tablice(n, tab);
    //przesun w lewo
    tmp=tab[0];
    for(int i=0; i<n-1; i++){
        tab[i]=tab[i+1];
    }
    tab[n-1]=tmp;
    printf("\nW lewo: ");
    drukuj_tablice(n, tab);
    //przesun w pawo
    tmp=tab[n-1];
    for(int i=n-1; i>0; i--){
        tab[i]=tab[i-1];
    }
    tab[0]=tmp;
    printf("\nW prawo: ");
    drukuj_tablice(n, tab);
    //sortuj rosnąco  
    for(int i=0; i<n-1; i++){
        int index_max=max(n-i, tab);
        zamien(&tab[index_max], &tab[n-i-1]);
    }
    printf("\nSortuj rosnaco: ");
    drukuj_tablice(n, tab);
    //sortuj malejaco:  
    for(int i=0; i<n-1; i++){
        int index_min=min(n-i, tab);
        zamien(&tab[index_min], &tab[n-i-1]);
    }
    printf("\nSortuj malejaco: ");
    drukuj_tablice(n, tab);

}


int main(int argc, char const *argv[])
{
    int n=N;
    int tab1[N]={2,6,5,2,2,21,2,22,82,24};

    drukuj_tablice(n, tab1);

    funkcja(n, tab1);

    

    return 0;
}
