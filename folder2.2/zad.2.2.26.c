/*
2.2.26 (*,r,!) Napisz funkcję rekurencyjną, która dla otrzymanej w argumencie
nieujemnej liczby całkowitej n zwraca wartość elementu o indeksie
n ciągu zdefiniowanego w następujący sposób
a0 = a1 = a2 = 1
oraz dla k > 2
3)      a3·k = a3·k−1 + a3·k−2
2)      a3·k+1 = 5 ∗ a3·k + 4
1)      a3·k+2 = a3·k+1
*/

#include <stdio.h>

int arsen(int n)
{
    static int index=1;
    if(n%3==1){
        index++;
        return arsen(n-1);
    }
    else if(n%3==2){
        index++;
        return 5*arsen(n-1)+4;
    }
    else{
        index++;
        return arsen(n-1)+arsen(n-2);
    }

}

int main(void){
    printf("%d\n", arsen(3));

    return 0;
}