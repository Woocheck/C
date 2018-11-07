/*
7.2.11 (r) Zdefiniuj unię Liczba, która może służyć w zależności od potrzeb
do przechowywania liczby wymiernej lub liczby całkowitej. Zdefiniuj
strukturę Dane, o dwóch polach polu tp typu int oraz polu zaw typu
Liczba.
Napisz bezargumentową funkcję, która wczytuje ze standardowego
wejścia zawartość do struktury Dane i zwraca ją jako wartość. Funkcja
powinna pytać użytkownika, czy chce wczytać liczbę całkowitą,
czy wymierną oraz w zależności od jego wyboru wstawić do pola tp
wartość 0 lub 1. Następnie funkcja powinna wczytać do pola zaw wartość
odpowiedniego typu.
*/



#include <stdio.h>

union Liczba {
    int i_var;
    float f_var;
};

struct Dane {
    int tp;
    union Liczba zaw;
};

struct Dane podaj_liczbe()
{
    struct Dane wartosc;
    
    printf("Podaj typ danych (0-int, 1-float):");
    scanf(" %d", &wartosc.tp);
    
    printf("Podaj liczbe:");
    if(wartosc.tp==0){
        scanf(" %d", &wartosc.zaw.i_var);
    }
    else{
        scanf(" %f", &wartosc.zaw.f_var);
    }
    return wartosc;
}

int main()
{
    struct Dane liczba;

    liczba=podaj_liczbe();

    printf("Wczytana liczba to:\n");
    if(liczba.tp==0){
        printf(" %d", liczba.zaw.i_var);
    }
    else{
        printf(" %f", liczba.zaw.f_var);
    }
    
    return 0;
}
