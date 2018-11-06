/*
7.2.3 (r) Zdefiniuj strukturę punkt służącą do przechowywania współrzędnych
punktów w trójwymiarowej przestrzeni kartezjańskiej.
Napisz funkcję, która otrzymuje jako argumenty tablicę tab o argumentach
typu struct punkt oraz jej rozmiar, i zwraca jako wartość
najmniejszą spośród odległości pomiędzy punktami przechowywanymi
w tablicy tab. Zakładamy, że otrzymana w argumencie tablica
ma co najmniej dwa argumenty.
*/

#include <stdio.h>
#include <math.h>

#define N 4    //rozmiar zdefiniowanej struktury
struct punkt {
    int x;
    int y;
    int z;
};

float najmniejsza_odleglosc(struct punkt p[], int n)
{   
    float min_odl=0;
    float odleglosc=0;
    odleglosc=sqrt((pow(p[1].x - p[0].x,2)+pow((p[1].y - p[0].y),2)+pow((p[1].z - p[0].z),2)));
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            odleglosc=sqrt((pow(p[i].x - p[j].x,2)+pow((p[i].y - p[j].y),2)+pow((p[i].z - p[j].z),2)));
            if(min_odl>odleglosc)min_odl=odleglosc;
        }
    }

    return odleglosc;
}

void wczytaj_punkt(struct punkt *pkt)
{
    printf("Podaj x y z:");
    scanf(" %d %d %d", &pkt->x, &pkt->y, &pkt->z);
}
void drukuj(struct punkt ptk)
{
    printf("a: %d b: %d c: %d\n", ptk.x, ptk.y, ptk.z);
}

int main(int argc, char const *argv[])
{
    struct punkt punkty[N];
    int n=N;
    printf("Podaj wspolrzedne punktrow:\n");
    for(int i=0; i<n; i++){
        wczytaj_punkt(&punkty[i]);
    }

    printf("\nNajmniejsza odleglosc wynosi: %.3f", najmniejsza_odleglosc(punkty, n));
    
    return 0;
}
