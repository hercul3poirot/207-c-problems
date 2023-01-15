//31. Write a C program to check wehter a given integer is positive even, negative even, positive odd, or negative odd.
#include <stdio.h>

struct Number {
    int value; 
    char *sign;
    char *polarity;
} inputNumber; 

void main() {
    printf("Input an integer: ");
    scanf("%i", &inputNumber.value);
    if (inputNumber.value > 0){
        inputNumber.sign = "Positive";
    } else {
        inputNumber.sign = "Negative"; 
    }
    if (inputNumber.value % 2 == 0) {
        inputNumber.polarity = "Even";
    } else {
        inputNumber.polarity = "Odd";
    }
    printf("%s %s", inputNumber.sign, inputNumber.polarity);
}