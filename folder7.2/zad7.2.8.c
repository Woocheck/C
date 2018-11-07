/*
7.2.8 Zdefiniuj strukturę student służącą do przechowywania danych osobowych
studenta (struktura powinna zawierać takie pola, jak: imie,
nazwisko, adres, pesel, kierunek i numer legitymacji).
Napisz funkcję, która otrzymuje jako argument wskaźnik na strukturę
student i wczytuje dane ze standardowego wejścia do rekordu
wskazywanego przez argument funkcji.
*/

#include <stdio.h>


struct student {
    char imie[20];
    char nazwisko[20];
    char adres[100];
    int pesel;
    char kierunek[100];
    int nr_legitymacji;
};

void dodaj_rekord(struct student *rekord)
{
    printf("Podaj imie i nazwisko:");
    scanf(" %s %s", &(rekord->imie[0]), &(rekord->nazwisko[0]));
    printf("Podaj adres:");
    scanf(" %s", &(rekord->adres[0]));
    printf("Podaj nr PESEL:");
    scanf(" %d", &(rekord->pesel));
    printf("Podaj kierunek:");
    scanf(" %s", &(rekord->kierunek[0]));
    printf("Podaj nrlegitymacji:");
    scanf(" %d", &(rekord->nr_legitymacji));
    printf("\n");

}

int main(int argc, char const *argv[])
{
    struct  student lista_studentow[100];
    int l=3;
    for(int i=0; i<l; i++){
        dodaj_rekord(&lista_studentow[i]);
    }

    for(int i=0; i<l; i++){
        printf("%d. %s %s %d\n", i+1, lista_studentow[i].imie, lista_studentow[i].nazwisko, lista_studentow[i].pesel);
    }

    return 0;
}
