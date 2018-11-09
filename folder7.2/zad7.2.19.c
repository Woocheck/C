/*
7.2.19 (r) Wykorzystując typ danych zdefiniowany w rozwiązaniu zadania
18 napisz funkcję, która dostaje w argumentach dwie nieujemne liczby
całkowite typu unsigned int i zwraca jako wartość nieujemną liczbę
całkowitą, której kolejne bajty są iloczynami modulo 256 odpowiadających
sobie bajtów liczb podanych w argumentach.
*/

#include <stdio.h>

union bajty {
    unsigned int value;
    char bit[4];
};

unsigned int byte_modulo(union bajty x, union bajty y){

    union bajty value_modulo;

    for(int i=0; i<4; i++){
        value_modulo.bit[i]=(x.bit[i]%256)*(y.bit[i]%256);
    }
    return value_modulo.value;
}
int main()
{   
    union bajty a, b;
    a.value=10;
    b.value=2355;

    printf("%x", byte_modulo(a,b));
   
    return 0;
}
