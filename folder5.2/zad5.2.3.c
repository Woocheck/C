/*
5.2.3 Napisz funkcję porownaj, która jako argumenty otrzymuje dwa napisy
i zwraca 1 gdy napisy są równe i 0 w przeciwnym przypadku. Napisz
dwie wersje funkcji porownaj dla napisów składających się ze znaków
typu char i wchar_t.
*/
#include <stdio.h>

int porownaj(char *napis1, char *napis2){
    int i1=0, i2=0;
    while(napis1[i1]!=0)i1++;
    while(napis1[i2]!=0)i2++;
    if(i1==i2)
    {   int i=i1;
        while(i>=0){
            if(napis1[i]!=napis2[i]) return 0;
            i--;
        }
        return 1;
    }
    else
    {
        return 0;
    }
        
}
int porownaj_t(wchar_t *napis1, wchar_t *napis2){
    int i1=0, i2=0;
    while(napis1[i1]!=0)i1++;
    while(napis1[i2]!=0)i2++;
    if(i1==i2)
    {   int i=i1;
        while(i>=0){
            if(napis1[i]!=napis2[i]) return 0;
            i--;
        }
        return 1;
    }
    else
    {
        return 0;
    }   
}
int main(int argc, char const *argv[])
{
    wchar_t napis1[80]=L"wchart t";
    wchar_t napis3[80]=L"wchart t";
    char napis2[80]="char";
    char napis4[80]="char";
    printf("%d\n",porownaj_t(napis1, napis3));
    printf("%d",porownaj(napis2, napis4)); 

    return 0;
}
