/*
4.2.7 Napisz funkcję, która otrzymuje cztery argumenty: dodatnią liczbę
całkowitą n oraz trzy n-elementowe tablice tab1, tab2 i tab3 o elementach
typu int, i:
a) przypisuje elementom tablicy tab3 sumę odpowiadających im elementów
tablic tab1 i tab2 (do komórki tablicy tab3 o indeksie i
powinna trafić suma elementów tab1[i] i tab2[i]),
b) przypisuje elementom tablicy tab3 większy spośród odpowiadających
im elementów tablic tab1 i tab2 (do komórki tablicy tab3
o indeksie i powinien trafić większy spośród elementów tab1[i]
i tab2[i]),
c) przypisuje zawartość tablicy tab1 do tablicy tab2, zawartość tablicy
tab2 do tablicy tab3 oraz zawartość tablicy tab3 do tablicy
tab1.
*/
#include <stdlib.h>
#include <stdio.h>
#define N 10

void suma_w_tab3(int n, int *tab1, int *tab2, int *tab3)
{   
    for(int i=0; i<n; i++) tab3[i]=tab1[i]+tab2[i];
}

void wiekszy_do_tab3(int n, int *tab1, int *tab2, int *tab3)
{
    for(int i=0; i<n; i++) tab3[i]= (tab1[i]>tab2[i]) ? tab1[i] : tab2[i];
}

void zamien_tablice(int n, int *tab1, int *tab2, int *tab3)
{   
    int tmp[3];
    for(int i=0; i<n; i++){
        tmp[1]=tab1[i];
        tmp[2]=tab2[i];
        tmp[3]=tab3[i];
        tab1[i]=tmp[2];
        tab2[i]=tmp[3];
        tab3[i]=tmp[1];
    };
}
 

int main(int argc, char const *argv[])
{
    int n=N;
    int tab1[N]={1,2,3,4,5,6,7,8,9,10};
    int tab2[N]={10,2,7,2,12,25,3,2,5,1};
    int tab3[N]={0,0,0,0,0,0,0,0,0,0};

    printf(" %d elementow tablicy tab1: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab1[i]);
    }
    printf("\n %d elementow tablicy tab2: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab2[i]);
    }

    printf("\n %d elementow tablicy tab3: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab3[i]);
    }


    suma_w_tab3(n, tab1, tab2, tab3);
    printf("\nZawartosc talbicy tab3 po dodaniu tab1 i tab2:");
    for(int i=0; i<n; i++){
        printf(" %d", tab3[i]);
    }

    wiekszy_do_tab3(n, tab1, tab2, tab3);
    printf("\nZawartosc talbicy tab3 po wstawieniu wikszej z tab1 i tab2:");
    for(int i=0; i<n; i++){
        printf(" %d", tab3[i]);
    }

    zamien_tablice(n, tab1, tab2, tab3);
    
    printf("\n\n %d elementow tablicy tab1 tab2 i tab3: ", n);
    printf("\ntab1");
    for(int i=0; i<n; i++){
        printf(" %d", tab1[i]);
    }
    printf("\ntab2");
    for(int i=0; i<n; i++){
        printf(" %d", tab2[i]);
    }

    printf("\ntab3");
    for(int i=0; i<n; i++){
        printf(" %d", tab3[i]);
    }

    return 0;
}
