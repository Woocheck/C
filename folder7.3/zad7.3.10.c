/*
7.3.10 (r) Napisz funkcję utworz tworzącą pustą listę z głową o elementach
typu element i zwracającą jako wartość wskaźnik do głowy utworzonej
listy.
*/
#include <stdlib.h>
#include <stdio.h>

struct element {
    int i;
    struct element *nastepny;
};

struct element* utworz()
{ 
    struct element* nowa;

    nowa=malloc(sizeof(struct element));
    nowa->nastepny=NULL;

    return nowa;
}

int main()
{   
  
    return 0;
}
