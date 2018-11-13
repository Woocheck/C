/*
7.3.16 (r) Napisz funkcję znajdzp o dwóch argumentach Lista typu element*
i a typu int zwracającą wskaźnik do typu element. Funkcja powinna
sprawdzać, czy na liście reprezentowanej przez zmienną Lista, znajduje
się element o polu i równym a. Jeżeli tak, to funkcja powinna
zwrócić wskaźnik do elementu go poprzedzającego. W przeciwnymwypadku 
funkcja powinna zwrócić wskaźnik do ostatniego elementu listy.
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

struct element* znajdzp(struct element* Lista, int a)
{ 
    while(Lista->nastepny->i!=a ){
        Lista=Lista->nastepny;
        if(Lista->nastepny->nastepny==NULL) return NULL;
    }
    if(Lista->nastepny->i==a)
        return Lista;
    else
        return NULL;       
}

int main()
{   
  
    return 0;
}
