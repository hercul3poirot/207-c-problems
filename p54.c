//54. Write a C program that accepts a distance in centimeters, and prints the corresponding values in inches (ewwwww imperial).
#include <stdio.h>

int main() {
    float centimeters, inches;
    printf("Input data(cm): ");
    scanf("%f", &centimeters);
    inches = 0.393701 * centimeters;
    printf("Distance of %.2f cms is = %.2f inches.", centimeters, inches);
    return 0;
}