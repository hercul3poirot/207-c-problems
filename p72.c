//72. Write a C program to remove any negative signs in front of a number.
#include <stdio.h>
#include <stdlib.h>

void main() {
    int inputNum, absNum;
    printf("Please enter a negative integer: ");
    scanf("%i", &inputNum);
    absNum = abs(inputNum);
    printf("Original value = %i\nAbsolute value = %i", inputNum, absNum);
}