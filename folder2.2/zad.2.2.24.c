/*
2.2.24 (*) Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argumencie
nieujemnej liczby całkowitej n wartość elementu o indeksie n
ciągu zdefiniowanego w następujący sposób
a0 = a1 = 1
an = a0 + a1 + ... + an−1 dla n > 1
*/

#include <stdio.h>

int arsen(int n)
{
    if(n<2) return 2;
    return n+arsen(n-1);
}

int main(void){
    printf("%d\n", arsen(5));

    return 0;
}