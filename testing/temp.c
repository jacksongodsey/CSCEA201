#include <stdio.h>

int main(void) {

    //rand()% 100 + 20 gets you random numbers between 20 - 29

    int i;
    int Fibonacci[15];

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for (i = 2; i < 15; i++) {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i-2];
        printf("%d\n", Fibonacci[i]);
    }


}
