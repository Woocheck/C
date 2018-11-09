/*
7.2.16 Zdefiniuj typ wyliczeniowy, służący do przechowywania informacji o stanie
połączenia internetowego, o trzech wartościach odpowiadających
trzem stanom: połączenie nawiązane, połączenie nienawiązane i połączenie
w trakcie nawiązywania. Następnie zdefiniuj strukturę komputer
przechowującą stan połączenia, IP podłączonego komputera (jako napis)
oraz nazwę jego właściciela.
Napisz funkcję, która jako argument otrzymuje strukturę komputer
i wyświetla na standardowym wyjściu jej zawartość w sposób przyjazny
dla użytkownika.
*/



#include <stdio.h>
#include <string.h>

enum polaczenie {nawiazane, nie_nawiazane, w_trakcie_nawiazania};

struct komputer {
    enum polaczenie stan_polaczenia;
    char IP[36];
    char wlasciciel[50];
};

void drukuj(struct komputer dane)
{   
    printf("Wlasciciel: %s\n", dane.wlasciciel);
    printf("IP: %s\n", dane.IP);
    switch(dane.stan_polaczenia){
        case nawiazane:
            printf("Stan polaczenia: nawiazane");
            break;
        case nie_nawiazane:
            printf("Stan polaczenia: nie nawiazane");
            break;
        case w_trakcie_nawiazania:
            printf("Stan polaczenia: w trakcie nawiazywania");
            break;
    }
    
}
int main()
{   struct komputer komputery[10];

    strcpy(komputery[0].wlasciciel, "Jan Kowalski");
    strcpy(komputery[0].IP,"123.122.12.98");
    komputery[0].stan_polaczenia=nawiazane;

    drukuj(komputery[0]);

   
    return 0;
}
