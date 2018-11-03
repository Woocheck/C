/*
2.2.22 Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argumencie
nieujemnej liczby całkowitej n wartość elementu o indeksie n ciągu
zdefiniowanego w następujący sposób:
a0 = a1 = 1
an = an−1 + 2 ∗ an−2 + 3 dla n > 1
*/

#include <stdio.h>

int arg_an(int n)
{
    if(n<2) return 1;
    return 3+2*arg_an(n-2)+arg_an(n-1);
}

int main(void){
    printf("%d\n", arg_an(3));

    return 0;
}