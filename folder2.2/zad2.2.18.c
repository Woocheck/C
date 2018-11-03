/*2.2.18 (*) Napisz funkcję generującą liczby pseudolosowe. Pierwszą wartością
funkcji powinna być dowolna liczba z przedziału (0, 1). Kolejne
wartości powinny być wyliczane ze wzoru xn = 1 − x2
n−1,
gdzie xn to aktualna, a xn−1 to poprzednia wartość funkcji.
*/
#include <stdio.h>

float pseudolosowe(void){
    static float x = 0.4;
    x = 1 - x*x;
    return x;
}

int main(void){
    for(int i = 0; i< 3; i++){
        printf("%f\n", pseudolosowe());
    }
    return 0;
}