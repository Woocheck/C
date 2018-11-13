/*
7.3.7 (r) Napisz funkcję usun o dwóch argumentach Lista typu element*
i a typu int zwracającą wskaźnik do typu element. Funkcja powinna
usuwać z listy reprezentowanej przez zmienną Lista element o wartości
a pola i (o ile taki element znajduje się na liście) oraz zwracać
wskaźnik do pierwszego elementu zmodyfikowanej listy (jeżeli po usunięciu
elementu lista będzie pusta, to funkcja powinna zwrócić wartość
NULL).
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

struct element* usun(struct element* Lista, int a)
{ 
    if(Lista==NULL || ((Lista->nastepny==NULL) && (Lista->i==a))){
        return NULL;
    }
    else
    {
    struct element *nastepny, *poprzedni;
    struct element *sprawdzany=Lista;
    
    while(sprawdzany->i!=a){
        if(sprawdzany->nastepny==NULL) return NULL;
        poprzedni=Lista;
        sprawdzany=sprawdzany->nastepny;
        nastepny=sprawdzany->nastepny;
        }
    
    poprzedni->nastepny=nastepny;

    return Lista;
    }
}

int main()
{   
  
    return 0;
}
