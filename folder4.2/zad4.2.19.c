/*
4.2.19 (*) Napisz funkcję, która dostaje w argumentach dodatnią liczbę całkowitą
n oraz n-elementową tablicę liczb całkowitych tab1 o elementach
typu int i przepisuje do nowo utworzonej tablicy tab2 elementy
tablicy tab1 o wartości różnej od zera. Rozmiar tablicy tab2 powinien
być równy liczbie niezerowych elementów tablicy tab1. Jako wartość
funkcja powinna zwrócić wskaźnik na pierwszy element tablicy tab2.
*/
#include <stdlib.h>
#include <stdio.h>

#define N 10
int nie_puste(int n,int *tab)
{
    int nie_puste=0;
    for(int i=0; i<n; i++){
        if(tab[i]!=0)nie_puste++;
    }
    return nie_puste;
}

int* nowa_tablica(int n,int *tab)
{
    int* n_tab=(int*) malloc(n * sizeof(int));
    int rozmiar_nowej=0;
    for(int i=0; i<n; i++){
        if(tab[i]){
            n_tab[rozmiar_nowej]=tab[i];
            rozmiar_nowej++;
        }     
    }
    n_tab=(int*) realloc(n_tab, (rozmiar_nowej+1) * sizeof(int));
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
    int tab1[N]={1,0,5,1,4,0,0,2,1,9};
    
    int *new_tab=NULL;    
    printf("tab1:");
    drukuj_tablice(n, tab1);

    new_tab=nowa_tablica(n, tab1);
    
    printf("\nnew_tab:");
    drukuj_tablice(nie_puste(n, tab1) , new_tab);
    tab_del(new_tab);

    return 0;
}
