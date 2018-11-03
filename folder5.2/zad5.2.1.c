/*
5.2.1 (r) Napisz funkcję wyczysc, która usuwa z tablicy przechowywany
w niej napis (w sensie: umieszcza w niej poprawny napis o długości
0). Napisz dwie wersje funkcji wyczysc dla napisów składających się
ze znaków typu char i wchar_t.
*/
#include <stdio.h>

void wyczysc(char *napis){
    napis[0]=0;    
}
void wyczysc_t(wchar_t *napis){
    napis[0]=0;    
}
int main(int argc, char const *argv[])
{
    wchar_t napis1[80]=L"wchart t";
    char napis2[80]="char";
    wyczysc_t(napis1);
    wyczysc(napis2);   
    return 0;
}
