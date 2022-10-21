/******************************************
* Jackson Godsey
* Homework 1
* Program 1
* 9/21/22
* Description: This program takes a social security number as input and determines where the user was born.
******************************************/

#include <stdio.h>

int main(void) {

    //creating some variables
    int social, i;

    //get the social security number
    printf("Enter a SSN with no dashes or spaces.\n");
    scanf("%d", &social);

    //get the first three digits of the social
    for (i = 1; i <= 6; i++) {
        social /= 10;
    }

    //if else statements to determine where the user was born and print the results
    if (social == 574) {
        printf("Born in Alaska.\n");
    } else if (social > 574 || social < 531) {
        printf("Born in state other than AK, CA, WA, OR.\n");
    } else if (539 >= social) {
        printf("Born in Washington.\n");
    } else if (544 >= social) {
        printf("Born in Oregon.\n");
    } else if (574 >= social) {
        printf("Born in California.\n");
    }

    return 0;
}
