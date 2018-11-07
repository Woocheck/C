/*
7.2.12 (*) Zdefiniuj strukturę zespolone, która ma służyć do przechowywania
liczb zespolonych oraz unię Liczba mogącą przechowywać liczby
wymierne i całkowite. Części urojona i rzeczywista liczby zespolonej
powinny być przechowywane w polach im i re typu Liczba. Struktura
zespolone powinna mieć dodatkowe pole tp przechowujące informację
jakiego typu wartości przechowywane są w polach im i re
(zakładamy, że oba są tego samego typu).
Napisz funkcję dodaj, która dostaje dwa argumenty typu zespolone
i zwraca jako wartość ich sumę. Zwróć uwagę na zgodność typów
składników i zwracanej wartości (suma dwóch liczb całkowitych jest
liczbą całkowitą, natomiast jeżeli którykolwiek ze składników jest wymierny
to i suma jest wymierna).
*/



#include <stdio.h>

union Liczba {
    int i_var;
    float f_var;
};

struct zespolone {
    int tp;
    union Liczba re;
    union Liczba im;
};

struct zespolone Dodaj( struct zespolone a, struct zespolone b)
{
    struct zespolone suma;
    if(a.tp==0 && b.tp==0){
        suma.re.i_var = a.re.i_var + b.re.i_var;
        suma.im.i_var = a.im.i_var + b.im.i_var;
        suma.tp=0;
    }
    else
    {
        suma.re.f_var=a.re.f_var+b.re.f_var;
        suma.im.f_var=a.im.f_var+b.im.f_var;
        suma.tp=1;
    }
    return suma;
}

int main()
{
    struct zespolone x, y, z;
    x.re.i_var=1; x.im.i_var=3; x.tp=0;
    y.re.f_var=1.2; y.im.f_var=0.34; y.tp=1;

    z=Dodaj(x,y);

    if(z.tp==0){
        printf(" %d %d", z.re.i_var, z.im.i_var);
    }
    else{
        printf(" %f %f", z.re.f_var, z.im.f_var);
    } 

    return 0;
}
