/******************************************
* Jackson Godsey
* Homework 1
* Program 2
* 9/21/22
* Description: This program outputs a number and it's four digit binary value up to the number 15 using nested for loops
******************************************/

#include <stdio.h>

int main(void) {
    //declaring the variables and starting the for loops
    int number = 0, i, j, h, k;
    //looping from 0 to 1 representing binary
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                for (h = 0; h < 2; h++) {
                    for (k = 0; k < 2; k++) {
                        //print the number and then the binary values the incrementing the counter
                        printf("%d %d%d%d%d\n", number, i, j, h, k);
                        number += 1;
                    }
                }
            }
        }
    return 0;
}
