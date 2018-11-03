/*
3.2.14 (*) Napisz funkcję, która otrzymuje trzy argumenty:
— dwa wskaźniki na funkcje o jednym argumencie typu int zwracające
wartość typu int,
— wartość n typu unsigned int,
i zwraca true, jeżeli otrzymane w argumentach funkcje są równe
dla wartości od 0 do n i false w przeciwnym wypadku.
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ptr_do_funkcji(int (*ptr_f1)(int x), int (*ptr_f2)(int x), unsigned int n)
{
    int x=0;
    for(int i=0; i<=n;i++){
        if(ptr_f1(i)!=ptr_f2(i)) x++;
    }
    if(x){
        return false;
    }
    else{
        return true;
    }
    
}

int f1(int x)
{
    return 2*x;
}
int f2(int y)
{
    return 3*y;
}

double iloczyn( int x)
{
    return 2*x;
}

int main(int argc, char const *argv[])
{   
    printf(" %d", ptr_do_funkcji(f1, f2, 5));
    return 0;
}
