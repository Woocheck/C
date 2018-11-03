/*
1.4.7 Napisz program, który wczytuje ze standardowego wejścia dwie liczby
całkowite n i m (zakładamy, że n < m) i wypisuje na standardowym
wyjściu liczbę n ∗ . . . ∗ m.
*/
#include <stdio.h>

int main()
{
    int n=0, m=0;
    printf("Enter a values n and m: ");
    scanf(" %d %d", &n, &m);

    unsigned int product=1;
    for(int i=n; i <=m; i++){
        product*=i;           
    }
    printf("The value of the product is %d", product);
   
}