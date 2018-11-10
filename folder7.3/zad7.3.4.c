/*
7.3.4 (r) Napisz funkcję dodajk o dwóch argumentach Lista typu element*
i a typu int zwracającą wskaźnik do typu element. Funkcja powinna
dodawać na koniec listy reprezentowanej przez zmienną Lista nowy
element o wartości a pola i oraz zwracać wskaźnik do pierwszego
elementu tak powiększonej listy.
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

struct element* dodajk(struct element* Lista, int a)
{ 
    if(Lista==NULL){
        Lista=malloc(sizeof(struct element));
        Lista->i=a;
        Lista->nastepny=NULL;
        return Lista;
    }
    else
    {
    struct element *ostatni;
    struct element *tmp;

    tmp=Lista->nastepny;

    ostatni=malloc(sizeof(struct element));
    ostatni->i=a;
    ostatni->nastepny=NULL;

    while(tmp!=NULL)
        tmp=tmp->nastepny;
    tmp->nastepny=ostatni; 

    return Lista;
    }
}

int main()
{
    
    return 0;
}
