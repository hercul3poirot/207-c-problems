//95. Write a C program to print the corresponding Fahrenheit to Celsius and Celsius to Farenheit.
#include <stdio.h>

int main(){
    printf("Fahrenheit to Celsius\n");
    printf("---------------------\n");
    printf("Fahrenheit   Celsius\n");
    for (float fahrenheit = 0; fahrenheit <= 150; fahrenheit += 10) {
        float ctemp = fahrenheit * 9 / 5 + 32;
        printf("\n%6.1f     %7.1f", fahrenheit, ctemp);
    }
    printf("\n\nCelsius to Fahrenheit\n");
    printf("---------------------\n");
    printf("Celsius   Fahrenheit\n");
    for (float celsius = 0; celsius <= 150; celsius += 10) {
        float ftemp = (celsius - 32) * 5 / 9;
        printf("\n%6.1f     %7.1f", celsius, ftemp );
    }
    return 0;
}
