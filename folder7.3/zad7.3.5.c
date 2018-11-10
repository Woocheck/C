/*
7.3.5 (r) Napisz funkcję dodajw o trzech argumentach Lista i elem typu
element* oraz a typu int zwracającą wskaźnik do typu element.
Funkcja powinna dodawać element o wartości a pola i do listy reprezentowanej
przez zmienną Lista na miejscu tuż za elementem wskazywanym
przez elem. W przypadku, gdy elem jest równy NULL funkcja
powinna wstawić nowy element na początek listy. Funkcja powinna
zwrócić jako wartość wskaźnik do pierwszego elementu powiększonej
listy.
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

struct element* dodajm(struct element* Lista, struct element* elem, int a)
{ 
    
    if(Lista==NULL){
        Lista=malloc(sizeof(struct element));
        Lista->i=a;
        Lista->nastepny=NULL;
        return Lista;
    }
    else
    {
    struct element *nowy;
    struct element *poprzedni;
    struct element *kolejny;

    poprzedni=Lista;

    nowy=malloc(sizeof(struct element));
    nowy->i=a;
    nowy->nastepny=NULL;

    while(poprzedni->nastepny!=elem){
        poprzedni=poprzedni->nastepny;
        if(poprzedni->nastepny==NULL)break;
    }
    if(poprzedni->nastepny!=NULL){
        kolejny=poprzedni->nastepny;
        poprzedni->nastepny=nowy;
        nowy->nastepny=kolejny;
    }
    else
    {
        poprzedni->nastepny=nowy;
    }
    return Lista;
    }
}

int main()
{
    
    return 0;
}
