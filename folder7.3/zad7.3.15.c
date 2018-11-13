/*
7.3.15 (r) Napisz funkcję znajdz o dwóch argumentach Lista typu element*
i a typu int zwracającą wskaźnik do typu element. Funkcja powinna
sprawdzać, czy na liście reprezentowanej przez zmienną Lista, znajduje
się element o polu i równym a. Jeżeli tak, to funkcja powinna
zwrócić wskaźnik do tego elementu. W przeciwnym wypadku funkcja
powinna zwrócić wartość NULL.
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

struct element* znajdz(struct element* Lista, int a)
{ 
    while(Lista->i!=a){
        Lista=Lista->nastepny;
        if(Lista->nastepny==NULL) return NULL;
    }
    if(Lista->i==a)
        return Lista;
    else
        return NULL;       
}

int main()
{   
  
    return 0;
}
