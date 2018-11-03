/*3.2.9 (r,róż) Napisz bezargumentową funkcję, która rezerwuje pamięć
dla pojedynczej zmiennej typu int i zwraca jako wartość wskaźnik
do niej.
*/
#include <stdlib.h>
#include <stdio.h>

int *ptr_do_int(void)
{
    return malloc(sizeof (int));
}
int main(int argc, char const *argv[])
{   
    
    ptr_do_int();
    
    return 0;
}
