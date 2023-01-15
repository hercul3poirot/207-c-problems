//39. Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
#include <stdio.h>

void main() {
    int x,y,sum = 0;
    printf("Input the first integer: ");
    scanf("%i", &x);
    printf("Input the second integer: ");
    scanf("%i", &y);
    for (int i = x; i <= y; i++) {
        if (i % 17 != 0) {
            sum += i;
        }
    }
    printf("Sum: %i", sum);
}