/*
2.2.11 Napisz program, który wczytuje ze standardowego wejścia nieujemną
liczbę całkowitą n i wypisuje na standardowym wyjściu następującą
sumę √0 + √1 + . . . + ⌊√n⌋. Algorytm wyliczania sumy podziel
na dwie funkcje.
*/

#include <stdio.h>

float pierwiastek(int a)
{
    float x_n_1=0, x_n=1, e=0.01, difference=0;
    do{
            x_n_1=(x_n+(a/x_n))/2;
            
            difference=x_n_1 - x_n;
            if(difference<0)difference*=-1;
            
            x_n=x_n_1;
        }
        while(difference>e);
    return x_n_1;
}

float suma(int n)
{
    float suma=0;
    for(int i=1; i<=n; i++){
        
        suma+=pierwiastek(i);
    }
    return suma;
}

int main(int argc, char const *argv[])
{
    int n=0;
    printf("Podaj nie ujemna liczbe calkowita n:");
    scanf(" %d", &n);

    printf("Dla n rownego %d suma wyniesie %f", n, suma(n));
    return 0;
}
