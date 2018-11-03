/*
1.3.9 Napisz program kalkulator, który wykonuje wybraną przez użytkownika
operacją arytmetyczną na dwóch wczytanych liczbach. Program
powinien wczytywać dane ze standardowego wejścia i wypisywać wynik
na standardowym wyjściu.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x=0, y=0;
    char operation;
    printf("Wprowadz dzialanie na dwoch liczbach:");
    scanf(" %f %c %f", &x, &operation, &y);

    switch(operation){
        case '+': printf(" = %.3f", x+y); break;
        case '-': printf(" = %.3f", x-y); break;
        case '*': printf(" = %.3f", x*y); break;
        case '/': if(y!=0){
                        printf(" = %f", x/y); 
                        break;
                    }
                    else{
                        printf("Dielenie przez zero jest zabonione!!!\n");
                        break;
                    }
        default:
            printf("Podano zly znak operacji!!!\n");
    }
    return 0;
}