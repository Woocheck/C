/*
2.2.3 Napisz program, który wczytuje ze standardowego wejścia nieujemną
liczbę całkowitą n (n > 2) i wypisuje na standardowym wyjściu największą
liczbę k taką, że k dzieli n i k < n. Algorytm wyszukiwania
liczby k spełniającej powyższe warunki umieść w oddzielnej funkcji.
*/
#include <stdio.h>
int podaj_k(int n)
{
    int k=n-1;
    do
    {
        if(n%k)
        { 
            k--;
        }
        else
        {
            printf("Najwiekszy dzielnik to: %d", k);
            return 0;
        }
    }
    while(k>0);
    printf("Liczba pierwsza?!");
}

int main(int argc, char const *argv[])
{
    int n=0;
    int k=0;
    printf("Podaj liczbe wieksza niz 2: ");
    scanf("%d", &n);
    if(n>2)
    {
        podaj_k(n);
    }
    else
    {
        printf("Podales za mala liczbe.");
    }
    return 0;
}
