/*
1.4.6 Napisz program, który wczytuje ze standardowego wejścia liczbę całkowitą
n (n > 2) i wypisuje na standardowym wyjściu iloczyn liczb
parzystych z zakresu od 2 do n (czyli 2 ∗ 4 ∗ . . . ∗ n dla n parzystych
i 2 ∗ 4 ∗ . . . ∗ (n − 1) w przeciwnym wypadku).
*/
#include <stdio.h>



int main()
{
    int n=0;
    printf("Enter a value of n greater than 2: ");
    scanf(" %d", &n);

    if(n>2){
        int product=1;
        for(int i=2; i <n; i+=2){
            product*=i;           
        }
        printf("The value of the product is %d", product);
    }
    else{
        printf("The value n has to be greater than 2!\n");
    }
    return 0;
}