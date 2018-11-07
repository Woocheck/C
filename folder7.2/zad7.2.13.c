/*
7.2.13 (r) Zdefiniuj strukturę figura przechowującą wymiary figur geometrycznych
niezbędne do obliczenia pola. Struktura powinna mieć możliwość
przechowywania wymiarów takich figur, jak: trójkąt, prostokąt,
równoległobok i trapez. Rodzaj przechowywanej figury powinien być
zakodowany w wartości pola fig typu int. Definiując strukturę, staraj
się zużyć jak najmniej pamięci.
Napisz funkcję pole, która dostaje jako argument zmienną f typu
struct figura i zwraca jako wartość pole figury której wymiary przechowuje
zmienna f.
*/



#include <stdio.h>

struct figura {
    int fig; //0-trapez, 1-postokat, 2-trojkat,3-rownoleglobok
    float a;
    float b;
    float h;
};

float pole(struct figura fig)
{   
    float pole;
    if(fig.fig==0)
    {
        return 0.5*(fig.a+fig.b)*fig.h;
    }
    else if(fig.fig==1)
    {
        return fig.a * fig.b;
    }
    else{
        return 0.5*fig.a*fig.h;
    }
}


int main()
{
   
    return 0;
}
