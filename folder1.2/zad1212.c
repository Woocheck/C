#include <stdio.h>

int main(int argc, char const *argv[])
{
    float liczba;

    scanf(" %f", &liczba);
    printf("Liczba zapisana wykladniczo: %7.5e", liczba);

    return 0;
}
