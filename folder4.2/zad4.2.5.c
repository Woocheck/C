/*
4.2.5 (*,r,!,róż) Napisz funkcję, która otrzymuje jako argument liczbę całkowitą
n (n > 3) i zwraca jako wartość największą liczbę pierwszą
mniejszą od n (do wyznaczenia wyniku użyj algorytmu sita Eratostenesa).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int najwieksza_pierwsza(int n)
{
    int *tablica;
    tablica=(int*) malloc(n * sizeof(*tablica));

    int liczba_pierwsza_max=0;
    
    for(int i=2; i<n; i++) tablica[i]=true;
    
    for(int i=2; i<n; i++){
        if(tablica[i]){
            liczba_pierwsza_max=i;
            for(int j=i*i; j<n; j+=i){
                tablica[j]=false;
            }
        }

    }
    free(tablica);
    return liczba_pierwsza_max;
}

int main(int argc, char const *argv[])
{
   int n=0;
   printf("Podaj wartosc liczby n wiekszej lub rownej 3: ");
   scanf(" %d", &n);

   if(n>=3){
       printf("Najwieksza liczba pierwsza mniejsza od %d to liczba %d.", n, najwieksza_pierwsza(n));
   }
    return 0;
}
