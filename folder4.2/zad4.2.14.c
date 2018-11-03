/*
4.2.14 (*) Napisz funkcję, która otrzymuje jako argument dodatnią liczbę
całkowitą n, a następnie tworzy dynamiczną n-elementową tablicę
o elementach typu double i zwraca jako wartość wskaźnik do jej pierwszego
elementu.
*/
#include <stdlib.h>
#include <stdio.h>
double* nowa_tablica(int n)
{
    double* tab=(double*) malloc(n * sizeof(double));
    return tab;
}
int main(int argc, char const *argv[])
{
    int n=10;
    double *new_tab=NULL;    

    new_tab=nowa_tablica(n);

    return 0;
}
