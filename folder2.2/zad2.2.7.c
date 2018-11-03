/*
2.2.7 Napisz funkcję, która dostaje jako argumenty liczby całkowite n i m,
z których co najmniej jedna jest różna od zera i zwraca jako wartość
nm.
*/
#include <stdio.h>

float potega(int n, int m)
{
    float result=1;
    if(n==0){
        return 1;
    }
    else if(m<0){
        for(int i=-1; i>=m;i--){
            result/=n;
        }
    }
    else if(m>=0){
        for(int i=1; i<=m;i++){
            result*=n;
        }
    }
    else
    {
        result=1;
    }
    return result;
}

int main(int argc, char const *argv[])
{
  int n=0, m=0;
    printf("Podaj wartsci podstawe (n) oraz wykladnik (m): ");
    scanf(" %d %d", &n, &m);

    if(n==0 && m==0){     
        printf("Obie wartosci nie moga bycć rowne zero!\n");
    }
    else
    {
        printf("%d do potegi %d rowna sie: %4.2f", n, m, potega(n, m));
    }
    return 0;
}