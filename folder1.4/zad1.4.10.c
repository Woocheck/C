/*
1.4.10 (r,!) Napisz program, który wczytuje ze standardowego wejścia nieujemną
liczbę n i wypisuje na standardowym wyjściu wartość ⌊√n⌋
(wartość √n zaokrągloną w dół do najbliższej wartości całkowitoliczbowej).
Program napisz bez użycia funkcji z biblioteki matematycznej.
*/
#include <stdio.h>

int main()
{
    float a=0;
    printf("Enter a value of n greater than 0: ");
    scanf(" %f", &a);

    float x_n_1=0, x_n=1, e=0.01, difference=0;
    if(a>0){
        do{
            x_n_1=(x_n+(a/x_n))/2;
            
            difference=x_n_1 - x_n;
            if(difference<0)difference*=-1;
            
            x_n=x_n_1;
        }
        while(difference>e);
        printf("Square root of %.3f equals: %.3f", a, x_n_1);
    }
    else{
        printf("The value n has to be greater than 0!\n");
    }
    return 0;




}