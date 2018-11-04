/*
5.2.5 Napisz funkcję przepisz, która otrzymuje dwie tablice znaków i przepisuje
napis znajdujący się w pierwszej tablicy do drugiej tablicy. Zakładamy,
że w drugiej tablicy jest wystarczająco dużo miejsca. Napisz
dwie wersje funkcji przepisz dla napisów składających się ze znaków
typu char i wchar_t.
*/
#include <stdio.h>

void przepisz(char *napis1, char *napis2){
    int i=0;
    while(napis1[i]!=0){
        napis2[i]=napis1[i];
        i++;
    }
    napis2[i]='\0'; 
        
}

void przepisz_t(wchar_t *napis1, wchar_t *napis2){
    int i=0;
    while(napis1[i]!='\0'){
        napis2[i]=napis1[i];
        i++;
    }
    napis2[i]='\0'; 
        
}
int main(int argc, char const *argv[])
{
    
    wchar_t napis1[80]=L"sword";
    wchar_t napis2[80]=L"x";
    char napis3[80]="char";
    char napis4[80]="q";

    printf("%ls\n",napis2);
    printf("%s\n\n",napis4); 

    przepisz_t(napis1, napis2);
    przepisz(napis3, napis4);
    
    printf("%ls\n",napis2);
    printf("%s",napis4); 

   return 0;
}
