/*
7.3.12 (r) Napisz funkcję dodaj o dwóch argumentach Lista typu element*
i a typu int. Funkcja powinna dodawać na początek listy reprezentowanej
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
    nowy=malloc(sizeof(struct element));
    nowy->nastepny=Lista->nastepny;
    nowy->i=a;
    Lista->nastepny=nowy;
        
}

int main()
{   
  
    return 0;
}
