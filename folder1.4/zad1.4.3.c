/*
1.4.3 Napisz program wczytujący ze standardowego wejścia trzy dodatnie
liczby całkowite n, m i k, i wypisujący w kolejnych wierszach wszystkie
wielokrotności n większe od m i mniejsze od k.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n=0, m=0, k=0;
    printf("Podaj wartsci n, m i k: ");
    scanf(" %d %d %d", &n, &m, &k);

     if(n>0 && m>0){     //if n and m are above zero
        for(int i=(int)(m/n+1); (i*n)<k; i++)   // (int)(m/n+1) give minimal i value
        {
            printf("Dla i= %4d krotnosc wynsi %8d.\n", i, i*n);
        }
    }
    else
    {
        printf("Obie wartosci powinny byc ieksze od zera!\n");
    }
    return 0;
}