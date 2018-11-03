/*
1.3.5 (r) Napisz program obliczający pole trójkąta na podstawie wymiarów
podanych przez użytkownika. Użytkownik powinien mieć możliwość
podania długości podstawy i wysokości lub wszystkich boków trójkąta.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    printf("Wybierz metode bliczen: \n");
    printf("1. Trojkat prostokatny. Podaj wysokosc i dlugosc podstawy.\n");
    printf("2. Trojkat dowolny. Podaj dlugosci wszystkich bokow.\n");
    int decision=0;
    float a=0, b=0, c=0, surface_area=0;
    scanf(" %d", &decision);

    if( decision == 1){
        // calculations for first case
        printf("Podaj wysokosc i dlugosc podstawy: ");
        scanf(" %f %f", &a, &b);
        
        surface_area = (a*b)/2;
    }
    else{
        // calculations for second case
        printf("Podaj dlugosci wsystkich trzech bokow: ");
        scanf(" %f %f %f", &a, &b, &c);

        float half_perimeter=(a+b+c)/2;
        surface_area = sqrt(half_perimeter*(half_perimeter-a)
                            *(half_perimeter-b)*(half_perimeter-c));
    }

    printf("Pole powierzchni trojkata wynosi %.3f.", surface_area);

    return 0;
}
