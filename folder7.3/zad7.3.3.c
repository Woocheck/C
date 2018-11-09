/*
7.3.3 (r) Napisz funkcję dodaj o dwóch argumentach Lista typu element*
oraz a typu int zwracającą wskaźnik do typu element. Funkcja powinna
dodawać na początek listy reprezentowanej przez zmienną Lista
nowy element o wartości a pola i oraz zwracać wskaźnik do pierwszego
elementu tak powiększonej listy.
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

struct element* dodaj_na_przodzie(struct element *nast, int a)
{ 
    struct element *nowy;
    nowy=malloc(sizeof(struct element));
    nowy->i=a;
    nowy->nastepny=nast;
    return nowy;
}

int main()
{
    
    return 0;
}
