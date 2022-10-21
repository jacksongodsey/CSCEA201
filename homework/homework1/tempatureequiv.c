/////////////////////////
//CSCE A201
//Jackson Godsey
//9/21/22
//Purpouse: find the two temperatures where fahrenheit and celsius are the same
/////////////////////////

#include <stdio.h>

int main(void) {

    //creating some variables
    int temp, celsius, fahrenheit;

    printf("Running the maths on the correct temperature now!\n");

    // incrementing temp from -100 to 100 and running both conversion formulas and if the
    // results are equal then print the result out
    for (temp = -100; temp < 101; temp++) {
        celsius = (5 * (temp - 32)) / 9;
        fahrenheit = ((temp * 9) / 5) + 32;
        if (celsius == fahrenheit) {
            printf("Success! The temperature were both celsius and fahrenheit are the same is %d degrees.\n", temp);
        }
    }
}
