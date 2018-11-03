/*
1.4.4 (r) Napisz program, który wczytuje ze standardowego wejścia nieujemną
liczbę całkowitą n i wypisuje na standardowym wyjściu liczbę
n!.
*/
#include <stdio.h>

long double silnia(int n)
{
    if(n>1) {
        return n*silnia(n-1);
    }
    else
    {
        return 1;
    } 
}
int main(int argc, char const *argv[])
{
    unsigned int n=0;
    printf("Podaj wartsci n: ");
    scanf(" %d", &n);

    if(n>0){
        printf("Wartosc %d! wynosi %lu\n", n, (int)silnia(n));
    }
    else{
        printf("Wartosc n ma byc wieksza od zera!\n");
    }

}