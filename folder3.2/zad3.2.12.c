/*
3.2.12 Napisz funkcję, która dostaje jako argument dodatnią liczbę całkowitą
n, rezerwuje w pamięci blok n zmiennych typu double i zwraca jako
wartość wskaźnik do początku zarezerwowanego bloku pamięci.
*/
#include <stdlib.h>
#include <stdio.h>

double *ptr_do_int(unsigned int n)
{
    return malloc(n * sizeof (double));
}

int main(int argc, char const *argv[])
{   
    
    ptr_do_int(5);
    
    return 0;
}
