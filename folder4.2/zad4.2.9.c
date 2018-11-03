/*
4.2.9 Napisz funkcję, która otrzymuje cztery argumenty: dodatnią liczbę
całkowitą n oraz trzy n-elementowe tablice tab1, tab2 i tab3 o elementach
typu int i zamienia zawartości komórek otrzymanych w argumentach
tablic w następujący sposób:
— dla dowolnego i komórka tab1[i] powinna zawierać największą
spośród pierwotnych wartości komórek tab1[i], tab2[i]
oraz tab3[i],
— dla dowolnego i komórka tab2[i] powinna zawierać drugą
co do wielkości spośród pierwotnych wartości komórek tab1[i],
tab2[i] oraz tab3[i],
— dla dowolnego i komórka tab3[i] powinna zawierać najmniejszą
spośród pierwotnych wartości komórek tab1[i], tab2[i]
oraz tab3[i].
*/

#include <stdio.h>
#define N 10

void zamien (int *element1, int *element2)
{
    int tmp;
    tmp=*element1;
    *element1=*element2;
    *element2=tmp;
}

void sortuj(int n, int *tab1, int *tab2, int *tab3)
{   
    for(int i=0; i<n; i++){
        if(tab1[i]>tab2[i]) zamien(&tab1[i],&tab2[i]);
        if(tab2[i]>tab3[i]) zamien(&tab2[i],&tab3[i]);
        if(tab1[i]>tab2[i]) zamien(&tab1[i],&tab2[i]);
    }
}
void drukuj_tablice(int n, int *tab1, int *tab2, int *tab3)
{
    printf(" %d elementow tablicy tab1: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab1[i]);
    }
    printf("\n %d elementow tablicy tab2: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab2[i]);
    }
    printf("\n %d elementow tablicy tab3: ", n);
    for(int i=0; i<n; i++){
        printf(" %d", tab3[i]);
    }
}

int main(int argc, char const *argv[])
{
    int n=N;
    int tab1[N]={11,21,1,1,11,2,1,1,3,1};
    int tab2[N]={2,6,5,2,2,21,2,22,82,24};
    int tab3[N]={3,12,3,54,4,1,5,3,24,12};

    printf("Pred:\n");
    drukuj_tablice(n,tab1,tab2,tab3);

    sortuj(n,tab1,tab2,tab3);

    printf("\nPo:\n");
    drukuj_tablice(n,tab1,tab2,tab3);
    
    return 0;
}
