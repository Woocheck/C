/*
7.3.2 (r) Napisz funkcję wyczysc, która dostaje jako argument wskaźnik
do pierwszego elementu listy wskaźnikowej bezgłowy o elementach typu
element i usuwa wszystkie elementy listy.
*/

#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

void kasuj_liste(struct element *kasowany)
{ 
    kasowany=NULL;
}

int main()
{
    
    return 0;
}
