/*
1.4.12 (*,r) Napisz program, który wczytuje ze standardowego wejścia dodatnią
liczbę n i wypisuje na standardowym wyjściu sumę wszystkich
liczb mniejszych od n, względnie pierwszych z n.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n=0;
    printf("Enter a value of n greater than 0: ");
    scanf(" %d", &n);
    int sum=0;
    int prime_number=0;
    if(n>2){
        for(int i=0; i<n; i++){
            sum+=i;   
            
            if(i>1){
            for(int j =2; j<i;j++){
                if(i%j==0) prime_number++;
            }
            if(prime_number==0) printf(" %d ist the prime number\n", i);
            prime_number=0;
            }
        }
        printf("Sum all numbers smaller than %d ist: %d\n", n, sum);
    }    
    else{
        printf("The value n has to be greater than 2!\n");
    }
    return 0;
}