/*
3.2.6 Napisz funkcję, której argumentami są n typu int oraz w wskaźnik
do int, która przepisuje wartość n do zmiennej wskazywanej przez w.
*/

#include <stdio.h>

void przekaz(int x,int *w)
{
   *w=x; 
   
}
int main(int argc, char const *argv[])
{
    int a=5, b=8;
    
    printf("Podano dwie liczby a= %d i b= %d.\n",a , b);
    
    przekaz( a, &b);
    printf("Po przekazaniu a i b ma wartosc:\na= %d b= %d", a, b);

    return 0;
}