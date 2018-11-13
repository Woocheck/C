/*
7.3.14 (r) Napisz funkcję dodajw o trzech argumentach Lista oraz elem typu
element* i a typu int. Funkcja powinna dodawać element o wartości
a pola i do listy reprezentowanej przez zmienną Lista na miejscu tuż
za elementem wskazywanym przez elem.
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

void dodajw(struct element* Lista,struct element* elem, int a)
{ 
    struct element* nowy;
        
    nowy=malloc(sizeof(struct element));
    nowy->nastepny=elem->nastepny;
    nowy->i=a;
    elem->nastepny=nowy;     
}

int main()
{   
  
    return 0;
}
