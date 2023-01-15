//Write a C program that reads in two integers, and checks whether the first integer is a multiple of the second integer.
#include <stdio.h>

void main() {
    int x,y;
    printf("Enter the first number: ");
    scanf("%i", &x);
    printf("Enter the second number: ");
    scanf("%i", &y);
    if (x % y == 0){
        printf("%i is a multiple of %i", x, y);
    } else {
        printf("Not Multiplied :(");
    }
}