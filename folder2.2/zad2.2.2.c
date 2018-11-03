/*
2.2.2 (r) Napisz program, który wczytuje ze standardowego wejścia nieujemną
liczbę całkowitą n i wypisuje na standardowym wyjściu liczbę
n!.Wprogramie użyj samodzielnie zaimplementowanej funkcji liczącej
wartość silni.
*/
#include <stdio.h>

long int silnia(long int x)
{
    if(x<=1) 
    {
        return 1;
    }
    else
    {
        return (x*silnia(x-1));
    }
}

int main(int argc, char const *argv[])
{   
    long int x=0;
    printf("Podaj liczbe nieujemna: ");
    scanf("%d", &x);
    if(x>=0)
    {
    printf("\nWartosc silni: %d", silnia(x));    
    }
    else
    {
    printf("Liczba ma byc nie ujmna.");
    }
    return 0;
}
