/////////////////////////
//CSCE A201
//Jackson Godsey
//9/21/22
//Purpouse: Convert a Fahrenheit Temp to Celsius
/////////////////////////

#include <stdio.h>

int main() {
    int celsius;
    int fahrenheit;

    printf("Enter a temperature in Fahrenheit.\n");
    scanf("%d", &fahrenheit);
    // bug was here. operation to multiply five was not in the correct position.
    celsius = (5 * (fahrenheit - 32) / 9);
    printf("%d in Fahrenheit is %d in Celsius.\n", fahrenheit, celsius);
    return 0;
}
