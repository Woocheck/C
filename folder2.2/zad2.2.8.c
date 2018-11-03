/*
2.2.8 Napisz funkcję, która dostaje jako argumenty liczbę dodatnią n i zwraca
jako wartość ⌊√n⌋. Rozwiąż zadanie nie wykorzystując funkcji bibliotecznych.
*/

#include <stdio.h>

float perwiastek(float n) {
    float x, x0, e = 0.000001;
    x0 = n;
    do{
        x = 0.5 * (x0 + (n/x0));
        x0 = x;
        // Jeśli n a x^2 jest w granicy e
        // to jest wynik
    }while((x*x) - n > e);
    return x;
}

int main(void){
    float n = 9;
    printf("%f\n", perwiastek(n));
    return 0;
}