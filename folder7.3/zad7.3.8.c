/*
7.3.8 (r,!) Napisz funkcję usunw o dwóch argumentach Lista i elem typu
element* i zwracającą wskaźnik do typu element. Funkcja powinna
usuwać z listy reprezentowanej przez zmienną Lista element wskazywany
przez elem oraz zwracać wskaźnik do pierwszego elementu
zmodyfikowanej listy (jeżeli po usunięciu elementu lista będzie pusta,
to funkcja powinna zwrócić wartość NULL). Dla elem równego NULL
funkcja usunw nie powinna nic robić.
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

struct element* usunw(struct element* Lista, struct element* elem)
{ 
    struct element *biezacy_el, *nastepny;
    if(Lista==NULL)
        return Lista;
    
    biezacy_el=Lista;
    if((Lista==elem)||(elem==NULL)){
        Lista=Lista->nastepny;
        free(biezacy_el);
        return Lista;
    }

    while((Lista!=elem)&&(Lista->nastepny!=NULL))
        biezacy_el=biezacy_el->nastepny;
    
    if(biezacy_el!=NULL){
        nastepny=biezacy_el->nastepny;
        biezacy_el->nastepny=nastepny->nastepny;
        free(nastepny);
    }

    return Lista;
}

int main()
{   
  
    return 0;
}
