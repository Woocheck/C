/*
3.2.11 (r,róż) Napisz funkcję, która dostaje jako argument dodatnią liczbę
całkowitą n, rezerwuje w pamięci blok n zmiennych typu int i zwraca
jako wartość wskaźnik do początku zarezerwowanego bloku pamięci.
*/
#include <stdlib.h>
#include <stdio.h>

int *ptr_do_int(unsigned int n)
{
    return malloc(n * sizeof (int));
}
int main(int argc, char const *argv[])
{   
    
    ptr_do_int(5);
    
    return 0;
}
