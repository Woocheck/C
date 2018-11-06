/*
7.2.1 (r,róż) Zdefiniuj strukturę trojkat przechowującą długości boków
trójkąta. Napisz funkcję, która otrzymuje jako argument zmienną typu
struct trojkat, i zwraca jako wartość obwód trójkąta przekazanego
w argumencie.
*/

#include <stdio.h>

struct trojkat {
    int a;
    int b;
    int c;
};

int obwod_tojkata(struct trojkat figora)
{
    return figora.a+figora.b+figora.c;
}
int main(int argc, char const *argv[])
{
    struct trojkat figura;

    printf("Podaj dlogosci bokow trojkata (a b c):");
    scanf(" %d %d %d", &figura.a, &figura.b, &figura.c);

    printf("Obwod trojkata wynosi: %d", obwod_tojkata(figura));
    
    return 0;
}
