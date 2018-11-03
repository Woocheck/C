/*
2.2.4 Napisz funkcję, która dostaje jako argument nieujemną liczbę całkowitą
n i zwraca jako wartość liczbę 2n.
*/
#include <stdio.h>

int potega(int n)
{   
    int result=1;
    if(n>0){
        for(int i=1; i<=n;i++){
            result*=2;
        }
    }
    else
    {
        result=1;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int n=0;
    printf("Enter a non-negative number n: ");
    scanf(" %d", &n);
    printf("\n2 to power %d= %d", n, potega(n));
    return 0;
}
