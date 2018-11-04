/*
5.2.4 (r,!) Napisz funkcję, która jako argumenty otrzymuje dwa napisy
i zwraca wartość 1, gdy pierwszy napis jest wcześniejszy w kolejności
leksykograficznej i 0 w przeciwnym przypadku.
*/
#include <stdio.h>

int porownaj(char *napis1, char *napis2){
    int i=0;
    while(napis1[i]==napis2[i]){
        if(napis1[i]!=napis2[i]){
            if(napis1[i]<napis2[i])
                return 1;
            else
                return 0;
        }
        i++;
    }
    if(napis1[i]==0)
        return 1;
    else
        return 0;
        
}


int main(int argc, char const *argv[])
{
    
    char napis1[80]="chart";
    char napis2[80]="char";
    
    printf("%d",porownaj(napis1, napis2)); 

   return 0;
}
