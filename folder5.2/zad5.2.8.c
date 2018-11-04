/*
5.2.8 (r,!) Napisz funkcję, która otrzymuje w argumencie napis i podmienia
w nim wszystkie małe litery na duże litery.
Zakładamy, że napis przechowywany jest w tablicy o elementach typu
char, składa się wyłącznie z liter łacińskich i białych znaków,
oraz że system ,na którym jest kompilowany i uruchamiany program,
używa standardowego kodowania ASCII.
*/
#include <stdio.h>

void to_upper(char *napis)
{   
    int i=0;
    while(napis[i]!=0){
        if((int)napis[i]>=97 && (int)napis[i]<=122){
            napis[i]=napis[i]-32;
        }
        i++;
    }
    
}

int main(int argc, char const *argv[])
{    
    char napis[100]="Kon, krowa, droga na Ostroleke.";
    printf(" %s \n",napis);
    to_upper(napis);
    
    printf(" %s \n",napis);
  

   return 0;
}
