/*
7.2.2 (r,!) Napisz funkcję, która otrzymuje jako argumenty zmienną troj1
typu struct trojkat zdefiniowanego w zadaniu 7.2.1 oraz zmienną
troj2 wskaźnik na zmienną typu struct trojkat, i przepisuje zawartość
zmiennej troj1 do zmiennej wskazywanej przez troj2.
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

void kopiuj_strukture(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2=troj1;
}

void drukuj(struct trojkat elemnt)
{
    printf("a: %d b: %d c: %d\n", elemnt.a, elemnt.b, elemnt.c);
}

int main(int argc, char const *argv[])
{
    struct trojkat figura1, figura2;
    
    printf("Podaj dlogosci bokow trojkata (a b c):");
    scanf(" %d %d %d", &figura1.a, &figura1.b, &figura1.c);

    kopiuj_strukture(figura1, &figura2);
    printf("Obwod trojkata wynosi: %d", obwod_tojkata(figura2));
    
    return 0;
}
