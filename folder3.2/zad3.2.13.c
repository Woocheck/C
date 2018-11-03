/*
3.2.13 (*,r,!) Napisz funkcję o dwóch argumentach:
— wskaźnik na funkcję o jednym argumencie typu int zwracającą
wartość typu double,
— wartość typu int,
która zwraca wartość funkcji otrzymanej w pierwszym argumencie na
liczbie całkowitej podanej w drugim argumencie.
*/
#include <stdlib.h>
#include <stdio.h>

double ptr_do_funkcji(double (*ptr_f)(int x), int n)
{
    return ptr_f(n);
}

double iloczyn( int x)
{
    return 2*x;
}

int main(int argc, char const *argv[])
{   
    double a=10;
    printf(" %f", ptr_do_funkcji(iloczyn, a));
    
    return 0;
}
