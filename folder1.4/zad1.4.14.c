/*
1.4.14 (*) Napisz program, który wczytuje ze standardowego wejścia liczbę
n i wypisuje na standardowym wyjściu wszystkie trójki pitagorejskie
(tj. trójki liczb całkowitych a, b, c takich, że a2 +b2 = c2), składające
się z liczb mniejszych od n.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n=0;
    printf("Enter a value of n greater than 0: ");
    scanf(" %d", &n);
    
    int a=0, b=0, c=0;
    if(n>0){
        printf("For %d we have the following Pythagorean triple:\n", n);
        for(int i=1; i <=n; i++){
            a=2*i+1;
            b=2*i*(i+1);
            c=2*i*i+2*i+1;
            if(c>=n) break;
            printf(" %4d  %4d %4d\n", a, b, c);
        }
       
    }
    else{
        printf("The value n has to be greater than 2!\n");
    }
    return 0;
}