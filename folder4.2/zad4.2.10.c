/*
4.2.10 Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą
n oraz n-elementową tablicę tab o elementach typu int i:
a) (r,!) zwraca największą wartość przechowywaną w tablicy tab,
b) zwraca najmniejszą wartość przechowywaną w tablicy tab,
c) (r,!) zwraca indeks elementu tablicy tab o największej wartości,
d) zwraca indeks elementu tablicy tab o najmniejszej wartości,
e) zwraca największą spośród wartości bezwzględnych elementów przechowywanych
w tablicy tab,
f) zwraca indeks elementu tablicy tab o największej wartości bezwzględnej.
*/

#include <stdio.h>
#include <math.h>
#define N 10

struct informacje_o_tablicy {
    int index_max;
    int index_min;
    int index_abs_max;
};

struct informacje_o_tablicy funkcja(int n, int *tab)
{   
    struct informacje_o_tablicy wynik;
    int tmp_abs=0, tmp_abs_max=0;
    wynik.index_abs_max=0;
    wynik.index_max=0;
    wynik.index_min=0;
    
    for(int i=0; i<n; i++){
        //max
        if(tab[i]>tab[wynik.index_max])wynik.index_max=i;
        //min
        if(tab[i]<tab[wynik.index_min])wynik.index_min=i;
        //max abs
        if(abs(tab[i])>abs(tab[wynik.index_abs_max]))wynik.index_abs_max=i;
    }
    return wynik;
}
void drukuj_tablice(int n, int *tab)
{
    printf("\n %d elementow tablicy tab2: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab[i]);
    }
    
}

int main(int argc, char const *argv[])
{
    int n=N;
    int tab[N]={11,-21,1,-1,12,2,1,1,3,1};
    struct informacje_o_tablicy wynik;
    
    printf("Pred:\n");
    drukuj_tablice(n,tab);

    wynik=funkcja(n,tab);
    
    printf("Wynik: \n");
    printf("Elment maksymalny:                       tab[%d]= %d.\n", wynik.index_max, tab[wynik.index_max]);
    printf("Elment minimalny:                        tab[%d]= %d.\n", wynik.index_min, tab[wynik.index_min]);
    printf("Elment maksymalny(wartosci bezwzgledne): tab[%d]= %d.\n", wynik.index_abs_max, tab[wynik.index_abs_max]);
    return 0;
}
