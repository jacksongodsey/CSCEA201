#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main() {
    srand(time(NULL));

    int selection = rand() % 20;

    if (selection >= 14) {
        printf("Give them an Elbow Bump!\n");
    }
    else if (selection >= 9) {
        printf("Give them a big ol smile!\n");
    }
    else if (selection >= 5) {
        printf("Give them a hug!\n");
    }
    else if (selection >= 2) {
        printf("Give them a high five!\n");
    }
    else if (selection >= 0) {
        printf("Give them a handshake!\n");
    }

}
