/*
7.2.7 Zdefiniuj strukturę zespolone służącą do przechowywania liczb zespolonych.
Zdefiniowana struktura powinna zawierać pola im i re typu
double służące do przechowywania odpowiednio części urojonej
i rzeczywistej liczby zespolonej.
Napisz funkcję dodaj, która dostaje dwa argumenty typu zespolone
i zwraca jako wartość ich sumę.
*/

#include <stdio.h>


#define N 2     //rozmiar zdefiniowanej struktury
struct complex {
    double re;      
    double im;   
};

struct complex dodaj(struct complex a, struct complex b)
{
    struct complex tmp;
    tmp.re=a.re+b.re;
    tmp.im=a.im+b.im;

    return tmp;
}

int main(int argc, char const *argv[])
{
    struct complex x={2,2}, y={3,2}, z={0,0};
    
    printf("x= %.1f %.1f\n",x.re,x.im);
    printf("y= %.1f %.1f\n",y.re,y.im);
    
    z=dodaj(x, y);

    printf("z= %.1f %.1f\n",z.re,z.im);

    return 0;
}
