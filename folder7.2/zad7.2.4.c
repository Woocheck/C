/*
7.2.4 (r,!) Napisz funkcję, która otrzymuje jako argumenty tablice tab1
i tab2 o argumentach typu struct punkt zdefiniowanego w rozwiązaniu
zadania 7.2.3 oraz ich rozmiar, i przepisuje zwartość tablicy
tab1 do tablicy tab2.
*/

#include <stdio.h>


#define N 2    //rozmiar zdefiniowanej struktury
struct punkt {
    int x;
    int y;
    int z;
};

void kopiuj(struct punkt p[], struct punkt p2[], unsigned int m)
{   
    for(int i=0; i<m; i++){
        p2[i]=p[i];  
    }
    
}

void wczytaj_punkt(struct punkt *pkt)
{
    printf("Podaj x y z:");
    scanf(" %d %d %d", &pkt->x, &pkt->y, &pkt->z);
}

int main(int argc, char const *argv[])
{
    struct punkt punkty[N]={{1,5,1},{2,2,2}}, punkty2[]={ {0,5,0},{0,0,0}};
    int n=N;
    
    printf("\n\n");
    kopiuj(punkty, punkty2, n);

    for(int i=0;i<n;i++){
        printf(" %d %d %d\n", punkty2[i].x, punkty2[i].y, punkty2[i].z);
    }
    
    return 0;
}
