/*
1.4.9 (r,!) Napisz program, który wczytuje ze standardowego wejścia dodatnie
liczby całkowite n i m, i wypisuje na standardowym wyjściu
największy wspólny dzielnik tych liczb.
*/
#include <stdio.h>


int main()
{
    int n=0, m=0;
    printf("Enter two positive numbers n and m: ");
    scanf(" %d %d", &n, &m);

    if(n>0 && m>0){
              
       int tmp_m=0;
       while(m!=0){
            tmp_m=m;
            m=n%m;
            n=tmp_m;
       }
       
        printf("The number %d ist the greatest common divisor.\n", n);
    }
    else{
        printf("The value n has to be greater than 0!\n");
    }
    return 0;




}