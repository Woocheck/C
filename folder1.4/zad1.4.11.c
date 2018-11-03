/*
Napisz program, który wczytuje ze standardowego wejścia liczby a, b,
c, d i:
a) wypisuje na standardowe wyjście najmniejszą nieujemną liczbę
całkowitą x taką, że |a| ∗ x2 + b ∗ x + c > d.
b) wypisuje na standardowe wyjście największą nieujemną liczbę całkowitą
x taką, że 5∗x2+a∗x+b < c. Zakładamy, że taka nieujemna
całkowita liczba x istnieje.
c) wypisuje na standardowe wyjście największą nieujemną liczbę całkowitą
x taką, że 5∗x2+a∗x+b ≤ c. Zakładamy, że taka nieujemna
całkowita liczba x istnieje.
*/
#include <stdio.h>
#include <math.h>

int funkcja_a(float a, float b, float c, float d)
{
    
    float delta=0, x1=0, x2=0;
    if(a<0)a*=-1;
    delta=b*b-4*a*(c-d);
    if(delta>0)
    {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        if(x1>1 && x2>1){
            return 1;
        }
        else if(x1<0 && x2<0){
            return 1;
        }
        else{
            return (int)x2+1;
        }
    }
    if(delta==0)
    {
        x1=(-b/2*a);
        if(x1>1){
            return 1;
        }
        else{
            return (int)x1+1;
        }
        
    }
} 

int funkcja_b(float a, float b, float c, float d)
{
    float delta=0, x1=0, x2=0;
    c=b;
    b=a;
    a=5;
    d=0;
    delta=b*b-4*a*(c-d);
    
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        if(x1<1){
            return 1;
        }
        else{
            return (int)x1+1;
        }
    
    
} 

int funkcja_c(float a, float b, float c, float d)
{
     float delta=0, x1=0, x2=0;
    c=b;
    b=a;
    a=5;
    d=0;
    delta=b*b-4*a*(c-d);
    if(delta>0)
    {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        if(x1<1){
            return 1;
        }
        else{
            return (int)x1+1;
        }
    }
    if(delta==0)
    {
        x1=(-b/2*a);
        return x1; 
    }    
} 

int main(int argc, char const *argv[])
{
    float a=0, b=0, c=0, d=0;
    printf("Wprowadz wspolczynniki:");
    scanf(" %f %f %f %f", &a, &b, &c, &d);

    printf("wynik funkcji a= %d\n", funkcja_a(a,b,c,d));
    printf("wynik funkcji b= %d\n", funkcja_b(a,b,c,d));
    printf("wynik funkcji c= %d\n", funkcja_c(a,b,c,d));

    return 0;
}
