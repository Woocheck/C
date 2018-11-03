/*
2.2.25 (*) Napisz funkcję rekurencyjną, która dla otrzymanej w argumencie
nieujemnej liczby całkowitej n zwraca wartość elementu o indeksie n
ciągu zdefiniowanego w następujący sposób
a0 = a1 = 1
an = an−1 + n dla n parzystych
an = an−1 ∗ n dla n nieparzystych.
*/

#include <stdio.h>

int arsen(int n)
{
    if(n<2) return 2;
    if(n%2==0){
    return n+arsen(n-1);
    }
    else
    {
        return n*arsen(n-1);
    }
}

int main(void){
    printf("%d\n", arsen(3));

    return 0;
}