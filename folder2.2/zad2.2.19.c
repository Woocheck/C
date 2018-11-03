/*
2.2.19 (*) Napisz funkcję, która wczytuje ze standardowego wejścia liczbę
całkowitą i zwraca ją jako swoją wartość. Dodatkowo funkcja powinna
sumować wszystkie dotychczas wczytane wartości i przy każdym
swoim wywołaniu wypisywać na standardowym wyjściu ich aktualną
sumę .
*/

#include <stdio.h>

void zlicz(void){
    static int i = 0;
    int n;
    i++;
    scanf(" %d", &n);
    printf("Wejscie %d. Wywolanie numer %d.\n", n, i);
}

int main(void){
    for(int i = 0; i <10; i++){
        zlicz();
    }

    return 0;
}