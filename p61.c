//61. Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places.
#include <stdio.h>
#include <math.h>

int main() {
    float x, endVal;
    printf("Input value of x: ");
    scanf("%f", &x);
    if (x != 0) {
        endVal = sin(1/x);
        printf("Value of sin(1/x) is %.4f", endVal);
    } else {
        printf("x cannot be zero, as this is undefined.");
    }
    return 0;
}