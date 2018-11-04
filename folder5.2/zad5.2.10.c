/*
5.2.10 (*,r) Napisz funkcję wytnij2, która dostaje jako argument dwa napisy
nap1 i nap2, i wycina z napisu nap1 pierwsze wystąpienie w nim
napisu nap2. Napisz dwie wersje funkcji wytnij2 dla napisów składających
się ze znaków typu char i wchar_t.
*/
#include <stdio.h>

void wytnij(char *napis, int n, int m)
{   
    while(napis[m]!=0){
        napis[n]=napis[m];
        n++;
        m++;
    }
    napis[n]=0;
    
}

void wyszukaj_i_wytnij(char *napis1, char *napis2)
{
    int n1_dlugosc=0;
    int n2_dlugosc=0;
    while(napis1[n1_dlugosc]!=0)n1_dlugosc++;
    while(napis2[n2_dlugosc]!=0)n2_dlugosc++;

    for(int i=0; i<n1_dlugosc-n2_dlugosc; i++){
        if(napis1[i]==napis2[0]){
            for(int j=1;j<n2_dlugosc; j++){
                if(napis1[i+j]!=napis2[j]) continue;
            }
            wytnij(napis1,i,i+n2_dlugosc);
            break;
        }
    }
}

void wytnij_t(wchar_t *napis, int n, int m)
{   
    while(napis[m]!=0){
        napis[n]=napis[m];
        n++;
        m++;
    }
    napis[n]=0;
    
}

void wyszukaj_i_wytnij_t(wchar_t *napis1, wchar_t *napis2)
{
    int n1_dlugosc=0;
    int n2_dlugosc=0;
    while(napis1[n1_dlugosc]!=0)n1_dlugosc++;
    while(napis2[n2_dlugosc]!=0)n2_dlugosc++;

    for(int i=0; i<n1_dlugosc-n2_dlugosc; i++){
        if(napis1[i]==napis2[0]){
            for(int j=1;j<n2_dlugosc; j++){
                if(napis1[i+j]!=napis2[j]) continue;
            }
            wytnij_t(napis1,i,i+n2_dlugosc);
            break;
        }
    }
}
int main(int argc, char const *argv[])
{    
    char napis1[100]="Kon, krowa, droga na Ostroleke.";
    char napis2[100]="krowa, ";
    wchar_t napis1_t[100]=L"Kon, krowa, droga na Ostroleke.";
    wchar_t napis2_t[100]=L"krowa, ";
    
    printf("Char:\n");
    printf(" %s \n",napis1);
    printf(" %s \n",napis2);
    wyszukaj_i_wytnij(napis1, napis2);
    printf(" %s \n",napis1);

    printf("wchar_t:\n");
    printf(" %ls \n",napis1_t);
    printf(" %ls \n",napis2_t);
    wyszukaj_i_wytnij_t(napis1_t, napis2_t);
    printf(" %ls \n",napis1_t);

   return 0;
}
