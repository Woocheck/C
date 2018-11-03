/*
4.2.1 Napisz funkcję, która otrzymuje dwa argumenty: nieujemną liczbę całkowitą
n oraz n-elementową tablicę tab elementów typu int i:
a) (r) nadaje wartość zero wszystkim elementom tablicy tab,
b) (r) zapisuje do kolejnych elementów tablicy wartości równe ich indeksom
(do komórki o indeksie i funkcja ma zapisywać wartość i),
c) podwaja wartość wszystkich elementów w tablicy tab,
d) do wszystkich komórek tablicy tab wstawia wartości bezwzględne
ich pierwotnych wartości.
*/
#include <stdio.h>

void zeruj(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++) tab[i]=0;
}

void wstaw_indeks(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++) tab[i]=i;
}

void wstaw_indeks(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++) tab[i]*=2;
} 

void wstaw_indeks(unsigned int n, int *tab)
{
    for(int i=0; i<n; i++) {
        if(tab[i]<0) tab[i]*=-1;
    }
} 