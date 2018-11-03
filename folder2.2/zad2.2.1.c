/*
2.2.1 (r) Napisz program, który wczytuje ze standardowego wejścia liczbę
całkowitą n i wypisuje na standardowe wyjście wartość bezwzględną
z n. Do rozwiązania zadania nie używaj funkcji bibliotecznych za wyjątkiem
operacji wejścia/wyjścia. W programie użyj samodzielnie zaimplementowanej
funkcji liczącej wartość bezwzględną.
*/
#include <stdio.h>

int abs( int liczba)
{
    if(liczba<0)liczba*=liczba*(-1);
    return liczba;
}

int main(int argc, char const *argv[])
{
    int n=0;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    n=abs(n);
    printf("\nWartosc bezwzgledna z n= %d", n);
    return 0;
}