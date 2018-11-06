/*
7.2.5 (r,!) Zdefiniuj strukturę punkt10 służącą do przechowywania współrzędnych
punktów w dziesięciowymiarowej przestrzeni kartezjańskiej.
Do przechowywania poszczególnych wymiarów wykorzystaj tablicę
dziesięcioelementową.
Napisz funkcję, która otrzymuje jako argumenty tablice tab1 i tab2
typu struct punkt10 oraz ich wspólny rozmiar, i przepisuje zwartość
tablicy tab1 do tablicy tab2.
*/

#include <stdio.h>


#define N 2    //rozmiar zdefiniowanej struktury
struct punkt10 {
    int tab[10];
};

void kopiuj(struct punkt10 p[], struct punkt10 p2[], unsigned int m)
{   
    for(int i=0; i<m; i++){
        p2[i]=p[i];  
    }
    
}

int main(int argc, char const *argv[])
{
    struct punkt10 punkty1[N], punkty2[N];
    int n=N;
    
    
    kopiuj(punkty1, punkty2, n);

   
    return 0;
}
