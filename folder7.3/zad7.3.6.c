/*
7.3.6 (r,!) Napisz funkcję znajdz o dwóch argumentach Lista typu
element* i a typu int zwracającą wskaźnik do typu element. Funkcja
powinna sprawdzać, czy na liście reprezentowanej przez zmienną
Lista znajduje się element o polu i równym a. Jeżeli tak, to funkcja
powinna zwrócić wskaźnik do tego elementu. W przeciwnym wypadku
funkcja powinna zwrócić wartość NULL.
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

struct element* znajdz(struct element* Lista, int a)
{ 
    
    if(Lista==NULL){
        return NULL;
    }
    else
    {
    while(Lista->i!=a){
        if(Lista->nastepny==NULL) return NULL;
        Lista=Lista->nastepny;
        }
    return Lista;
    }
}

int main()
{   
  
    return 0;
}
