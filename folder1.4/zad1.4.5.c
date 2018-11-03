/*1.4.5 Napisz program, który wczytuje ze standardowego wejścia nieujemną
liczbę całkowitą n i wypisuje na standardowym wyjściu sumę kwadratów
liczb od 0 do n.
*/
#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    int n=0;
    printf("Podaj wartsc n: ");
    scanf(" %d", &n);

    if(n>0){
        long double suma=0;
        for(int i=0; i<=n;i++){
            suma+=pow(n,2);
        }
        printf("Suma kwadratow wynosi: %lu.\n", (int)suma);
    }
    else{
        printf("Wartosc n ma byc wieksza od zera!\n");
    }
    return 0;
}