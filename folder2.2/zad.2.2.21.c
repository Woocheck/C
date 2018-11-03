/*
2.2.21 Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argumencie
nieujemnej liczby całkowitej n wartość elementu o indeksie n ciągu
zdefiniowanego w następujący sposób:
a0 = 1
an = 2 ∗ an−1 + 5 dla n > 0.

x * power(x-1);
*/

#include <stdio.h>

int arg_an(int n)
{
    if(n==0) return 1;
    return 5+2*arg_an(n-1);
}

int main(void){
    printf("%d\n", arg_an(1));

    return 0;
}