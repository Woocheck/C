/*
1.3.6 Napisz program, który wczytuje ze standardowego wejścia współczynniki
układu dwóch równań liniowych z dwoma niewiadomymi i wypisuje
na standardowym wyjściu rozwiązanie układu równań. W przypadku
nieskończonej liczby lub braku rozwiązań program powinien
wypisać na standardowym wyjściu odpowiednią informację.
Podpowiedź: zaimplementuj algorytm rozwiązywania układów równań
metodą wyznaczników (inaczej nazywaną wzorami Cramera).
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a1=0, b1=0, c1=0;
    float a2=0, b2=0, c2=0;

    printf("Podaj parametry (a1, b1, c1) dla piwszego rownania:");
    scanf(" %f %f %f", &a1, &b1, &c1);
    printf("Podaj parametry (a2, b2, c2) dla drugiego rownania:");
    scanf(" %f %f %f", &a2, &b2, &c2);

    //calculation of coefficients
    float w=0, w_x=0, w_y=0;
    w=(a1*b2)-(a2*b2);
    w_x=(c1*b2)-(c2*b2);
    w_y=(a1*c2)-(a2*c2);

    //calculating the results of the equation
    if(w!=0){
        printf("Wynik: \nx= %.2f\n y= %.2f\n", w_x/w, w_y/w);
    }
    else if(w==0 && w_x==0 && w_y==0){
        printf("Rownanie posiada nieskonczona liczbe rozwiazan.");
    }
    else{
        printf("Rownanie nie oznaczone.");
    }

    return 0;
}
