//38. Write a program that reads two numbers, and divides the first number by the second number. If the division is not possible, print "Division is not possible."
#include <stdio.h>

void main() {
    int x,y;
    float result;
    printf("Input two numbers:\n");
    printf("x: ");
    scanf("%i",&x);
    printf("y: ");
    scanf("%i",&y);
    if (y == 0) {
        printf("Division is not possible.");
    } else {
        result = (float)x/y;
        printf("%.2f", result);
    }
}