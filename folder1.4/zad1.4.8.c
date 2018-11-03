/*
1.4.8 (*,r) Napisz program, który wczytuje ze standardowego wejścia nieujemną
liczbę całkowitą n i wypisuje na standardowym wyjściu element
ciągu Fibonacciego o indeksie n.
*/
#include <stdio.h>

unsigned int Fibonacci_number(int n)
{
    if(n>2){
        return Fibonacci_number(n-1)+Fibonacci_number(n-2);
    }
    else
    {
        return 1;
    }
}


int main()
{
    int n=0;
    printf("Enter a value of n greater than 2: ");
    scanf(" %d", &n);

    if(n>2){
        //first solution
        printf("First solution:\n");
       printf("The value of the %d element Fibonacci_number is: %u.", n, Fibonacci_number(n));

       //second solution
        int element_n=0, element_n0=0, element_n1=1;
        for(int i=2; i<=n;i++){
            element_n=element_n0+element_n1;
            element_n0=element_n1;
            element_n1=element_n;
        }
        printf("\nSecond solution:\n");
        printf("The value of the %d element Fibonacci_number is: %u.", n, element_n);
    }
    else{
        printf("The value n has to be greater than 2!\n");
    }
    return 0;




}