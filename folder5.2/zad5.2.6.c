/*
5.2.6 Napisz funkcję kopiujn, która dostaje w argumentach dwie tablice
znaków nap1, nap2 oraz liczbę n i przekopiowuje n pierwszych znaków
z napisu przechowywanego w tablicy nap1 do tablicy nap2. W przypadku
gdy napis w tablicy nap1 jest krótszy niż n znaków, funkcja
powinna po prostu przepisać cały napis. Funkcja powinna zadbać o to,
żeby na końcu napisu w tablicy nap2 znalazł się znak o kodzie 0.
Zakładamy, że w docelowej tablicy jest wystarczająco dużo miejsca.
Napisz dwie wersje funkcji: dla napisów składających się ze znaków
typu char i wchar_t.
*/
#include <stdio.h>

void kopiujn(char *napis1, char *napis2, int n){
    int i=0;
    for(i=0; i<n; i++){
        napis2[i]=napis1[i];
        if(napis1[i]==0)break;
    } 
    if(napis2[n]!=0)napis2[n]=0;
}
void kopiujn_t(wchar_t *napis1, wchar_t *napis2, int n){
    int i=0;
    for(i=0; i<n; i++){
        napis2[i]=napis1[i];
        if(napis1[i]==0)break;
    } 
    if(i==n-1)napis2[n]=0;
}
        

int main(int argc, char const *argv[])
{    
    char napis1[100]="Kon, krowa, droga na Ostroleke.";
    char napis2[100]="";
    wchar_t napis3[100]=L"Kon, krowa, droga na Ostroleke.";
    wchar_t napis4[100]=L"";
   
    printf("n1: %s\n",napis1);
    printf("n2: %s\n",napis2); 
    printf("n3: %ls \n",napis3);
    printf("n4: %ls\n\n",napis4); 

    kopiujn(napis1, napis2,40);
    kopiujn_t(napis3, napis4,10);
    
    printf("n1: %s\n",napis1);
    printf("n2: %s\n",napis2);  
    printf("n3: %ls \n",napis3);
    printf("n4: %ls\n\n",napis4);

   return 0;
}
