/*
7.2.9 (r) Zdefiniuj strukturę lista posiadającą dwa pola: jedno typu int
oraz oraz drugie będące wskaźnikiem do definiowanego typu.
*/

// nie wiedziałem jak rozumieć "definiowany typ" prawdopodobnie struktura 2 to ta właściwa

#include <stdio.h>

struct struktura1 {
    int numer_punktu;
    struct wspolzedne {int x; int y;} punkt;
};

struct struktura2 {
    int zmienna_int;
    struct struktura2 *ptr;
};

int main()
{
    
    return 0;
}
