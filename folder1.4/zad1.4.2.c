/*
1.4.2 Napisz program wczytujący ze standardowego wejścia dwie dodatnie
liczby całkowite n i m, i wypisujący na standardowym wyjściu
m pierwszych wielokrotności liczby n.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n=0, m=0;
    printf("Podaj wartsci n i m: ");
    scanf(" %d %d", &n, &m);

    if(n>0 && m>0){     //if n and m are above zero
        for(int i=1; i<=m; i++)
        {
            printf("Dla i= %4d krotnosc wynsi %8d.\n", i, i*n);
        }
    }
    else
    {
        printf("Obie wartosci powinny byc wieksze od zera!\n");
    }
    return 0;
}
