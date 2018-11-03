/*
2.2.20 (r,!) Napisz rekurencyjną funkcję, która dla otrzymanej w argumencie
nieujemnej całkowitej liczby n zwraca jako wartość n!.
*/

#include <stdio.h>

int power(int x){
    if(x<2) return 1;

    return x * power(x-1);
}

int main(void){
    printf("%d\n", power(4));
    return 0;
}