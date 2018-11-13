/*
7.3.13 (r) Napisz funkcję dodajk o dwóch argumentach Lista typu element*
i a typu int. Funkcja powinna dodawać na koniec listy reprezentowanej
przez zmienną Lista nowy element o wartości a pola i.
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

void wyszysc(struct element* Lista, int a)
{ 
    struct element* nowy;
    while(Lista->nastepny!=NULL)
        Lista=Lista->nastepny;
    
    nowy=malloc(sizeof(struct element));
    nowy->nastepny=NULL;
    nowy->i=a;
    Lista->nastepny=nowy;     
}

int main()
{   
  
    return 0;
}
