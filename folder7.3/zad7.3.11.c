/*
7.3.11 (r) Napisz funkcję wyczysc, która dostaje jako argument wskaźnik
do listy wskaźnikowej z głową o elementach typu element i usuwa
wszystkie elementy listy (razem z głową).
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

void wyszysc(struct element* Lista)
{ 
    struct element* nastepny;
    nastepny=Lista->nastepny;
    free(Lista);
    Lista=nastepny;
    
    while(Lista!=NULL){
        nastepny=Lista->nastepny;
        free(Lista);
        Lista=nastepny;
    }

    
}

int main()
{   
  
    return 0;
}
