/*
5.2.2 (r) Napisz funkcję dlugosc, która jako argument otrzymuje napis
i zwraca jako wartość jego długość. Napisz dwie wersje funkcji dlugosc
dla napisów składających się ze znaków typu char i wchar_t.
*/
#include <stdio.h>

int dlugosc(char *napis){
    int i=0;
    while(napis[i]!=0)i++;
    return i;    
}
int dlugosc_t(wchar_t *napis){
    int i=0;
    while(napis[i]!=0)i++;
    return i;    
}
int main(int argc, char const *argv[])
{
    wchar_t napis1[80]=L"wchart t";
    char napis2[80]="char";
    printf("%d\n",dlugosc_t(napis1));
    printf("%d",dlugosc(napis2)); 

    return 0;
}
