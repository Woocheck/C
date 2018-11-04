/*
5.2.7 (r) Napisz funkcję sklej otrzymującą jako argumenty trzy tablice
znaków i zapisującą do trzeciej tablicy konkatenację napisów znajdujących
się w dwóch pierwszych tablicach (czyli dla napisów ”Ala m”
i ”a kota” znajdujących się w pierwszych dwóch argumentach do trzeciej
tablicy powinien zostać zapisany napis ”Ala ma kota”). Zakładamy,
że w trzeciej tablicy jest wystarczająco dużo miejsca.
Napisz dwie wersje funkcji sklej dla napisów składających się ze znaków
typu char i wchar_t.
*/
#include <stdio.h>

void sklej(char *napis1, char *napis2, char *napis3)
{   
    int i=0;
    while(napis1[i]!=0){
        napis3[i]=napis1[i];
        i++;
    }
    int j=0;
    while(napis2[j]!=0){
        napis3[i]=napis2[j];
        i++;
        j++;
    }
    napis3[i+1]=0;
}
void sklej_t(wchar_t *napis1, wchar_t *napis2, wchar_t *napis3)
{
    int i=0;
    while(napis1[i]!=0){
        napis3[i]=napis1[i];
        i++;
    }
    int j=0;
    while(napis2[j]!=0){
        napis3[i]=napis2[j];
        i++;
        j++;
    }
    napis3[i+1]=0;

}
        

int main(int argc, char const *argv[])
{    
    char napis1[100]="Ala m";
    char napis2[100]="a kota.";
    char napis3[100]="";
    wchar_t napis4[100]=L"Ala m";
    wchar_t napis5[100]=L"a kota.";
    wchar_t napis6[100]=L"";
   
    sklej(napis1, napis2, napis3);
    sklej_t(napis4, napis5, napis6);
    
    printf("char: %s \n",napis3);
    printf("wchar_t: %ls\n",napis6);

   return 0;
}
