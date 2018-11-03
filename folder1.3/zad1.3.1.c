/*
1.3.1 (r) Napisz program, który wczytuje ze standardowego wejścia liczbę
całkowitą n i wypisuje na standardowe wyjście wartość bezwzględną
z n.
Do rozwiązania zadania nie używaj funkcji bibliotecznych za wyjątkiem
operacji wejścia/wyjścia.
*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Podaj liczbe n: ");
    int n;
    scanf(" %d", &n);

    if(n<0)n*=-1;

    printf("Wartosc bzwzgledna: %d", n);
    return 0;
}
