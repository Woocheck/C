/*
7.2.17 (r,!,róż) Zdefiniuj strukturę dane osobowe zawierającą pola: imie,
nazwisko, plec, stan_cywilny. W zależności od płci pole
stan_cywilny powinno móc mieć jedną z dwóch wartości wolny
lub zonaty dla mężczyzn i wolna lub mezatka dla kobiet.
Napisz funkcję wczytaj o dwóch argumentach: tablicy tab o elementów
typu stan_cywilny i jej rozmiarze. Funkcja powinna wczytywać
do komórek tablicy tab wartości podane na standardowym wejściu.
*/



#include <stdio.h>
#include <string.h>

enum osoba {kobieta, mezczyzna};
enum kobieta {wolna, mezatka};
enum mezczyzna {wolny, zonaty};
union u_st_cyw {
    enum kobieta k;
    enum mezczyzna m;
};

struct dane_osobowe {
    char imie[20];
    char nazwisko[50];
    enum osoba czlowiek;
    union u_st_cyw stan_cywilny;
};

void wczytaj(struct dane_osobowe* osoba_rekord)
{
    printf("Podaj plec. (0-kobieta, 1-mezczyzna");
    scanf(" %d", &osoba_rekord->czlowiek);
    printf("\nPodaj imie: ");
    scanf(" %s", osoba_rekord->imie);
    printf("\nPodaj nazwisko: ");
    scanf(" %s", osoba_rekord->nazwisko);
    printf("\nStan cywilny ");
    if(osoba_rekord->czlowiek==kobieta){
        printf("0-wolna 1-mezatka: ");
        scanf(" %d", osoba_rekord->stan_cywilny.k);
    }
    else{
        printf("0-wolny 1-zonaty: ");
        scanf(" %d", &osoba_rekord->stan_cywilny.m);

    }
    
}
    
    

int main()
{   
    struct dane_osobowe osoby[10];

    for(int i=0; i<10; i++){
        wczytaj(&osoby[i]);
    }

   
    return 0;
}
