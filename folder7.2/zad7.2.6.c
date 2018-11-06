/*
7.2.6 (r,!) Zdefiniuj strukturę punktn służącą do przechowywania współrzędnych
punktów w n-wymiarowej przestrzeni kartezjańskiej. Do przechowywania
poszczególnych wymiarów wykorzystaj tablicę
n-elementową. W strukturze punktn przechowuj także ilość wymiarów
przestrzeni.
Napisz funkcję, która otrzymuje jako argumenty tablice tab1 i tab2
o argumentach typu struct punktn oraz ich wspólny rozmiar, i przepisuje
zwartość tablicy tab1 do tablicy tab2. Zakładamy, że tablica
tab2 jest pusta (czyli nie musimy się martwić o jej poprzednią zawartość).
*/
#include <stdlib.h>
#include <stdio.h>


#define N 2     //rozmiar zdefiniowanej struktury
struct punktn {
    int n;      //liczba wymiarow
    int *tab;   //wskaźnik do tablicy wymiarów
};

void kopiuj(struct punktn p1n[], struct punktn p2n[], int liczba_elementow)
{   
    for(int i=0;i<liczba_elementow;i++){
        p2n[i].tab=malloc(p1n[i].n*sizeof(int));
    }
    for(int i=0; i<liczba_elementow; i++){
        for(int j=0;j<p1n[i].n;j++){
            p2n[i].tab[j]=p1n[i].tab[j];
        }
    }
    
}


int main(int argc, char const *argv[])
{
    struct punktn punkty1[N], punkty2[N];
    int liczba_el=N;
    
    kopiuj(punkty1, punkty2, liczba_el);

    return 0;
}
