/*
2.2.23 (r,!) Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argumencie
nieujemnej liczby całkowitej n wartość elementu ciągu Fibonacciego
o indeksie n
*/

#include <stdio.h>

int arsen(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return arsen(n-2)+arsen(n-1);
}

int main(void){
    printf("%d\n", arsen(15));

    return 0;
}