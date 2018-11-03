/* 2.2.17 (*,r,!) Napisz funkcję, która zlicza i wypisuje na standardowym wyjściu
liczbę swoich wywołań.
*/
#include <stdio.h>

void zlicz(void){
    static int i = 0;
    i++;
    printf("Wywolana %d raz.\n", i);
}

int main(void){
    for(int i = 0; i < 10; i++)
    zlicz();
}