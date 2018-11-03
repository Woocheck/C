/*
1.4.13 (*, r, !) Napisz program, który wczytuje ze standardowego wejścia
nieujemną liczbę całkowitą n i wypisuje na standardowym wyjściu
wartość 0! + 1! + . . . + n!.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n=0;
    printf("Enter a value of n greater than 0: ");
    scanf(" %d", &n);
    
    int sum=0, factorial=1;
    if(n>0){
        for(int i=0; i<=n; i++){
            for(int j=1; j<=i;j++){
                factorial*=j;
            }
            printf(" %d", factorial);
            sum+=factorial;
        }   
    printf(" Sum of factorials for %d ist: %d\n", n, sum);
    }
    else{
        printf("The value n has to be greater than 2!\n");
    }
    return 0;
}