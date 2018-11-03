/*
3.2.10 Napisz bezargumentową funkcję, która rezerwuje pamięć dla pojedynczej
zmiennej typu double i zwraca jako wartość wskaźnik do niej.
*/
#include <stdlib.h>
#include <stdio.h>

double *ptr_do_int(void)
{
    return malloc(sizeof (double));
}
int main(int argc, char const *argv[])
{   
    
    ptr_do_int();
    
    return 0;
}
