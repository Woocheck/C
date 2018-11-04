/*
5.2.9 (r) Napisz funkcję wytnij, która dostaje jako argumenty napis
oraz dwie liczby całkowite n i m, i wycina z otrzymanego napisu znaki
o indeksach od n do m ( n 6 m). Otrzymany w argumencie napis
może mieć dowolną liczbę znaków (w tym mniejszą od n lub m)
Napisz dwie wersje funkcji wytnij dla napisów składających się ze znaków
typu char i wchar_t.
*/
#include <stdio.h>

void cut(char *napis, int n, int m)
{   
    while(napis[m]!=0){
        napis[n]=napis[m];
        n++;
        m++;
    }
    napis[n]=0;
    
}

int main(int argc, char const *argv[])
{    
    char napis[100]="Kon, krowa, droga na Ostroleke.";
    printf(" %s \n",napis);
    cut(napis,5,12);
    
    printf(" %s \n",napis);

   return 0;
}
