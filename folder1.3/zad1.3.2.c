/*
1.3.2 Napisz program, który wczytuje ze standardowego wejścia dwie liczby
całkowite i wypisuje na standardowym wyjściu większą z nich (w przypadku
gdy podane liczby są równe, program powinien wypisać którąkolwiek
z nich).
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Podaj dwie liczby: ");
    scanf(" %d %d", &a , &b);
    if(a>=b) {
        printf(" %d", a);
    }
    else
    {
        printf(" %d", b);
    }
    return 0;
}
