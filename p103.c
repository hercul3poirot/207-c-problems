//103. Write a C program that takes two integers and tests whether they are multiples or not.
#include <stdio.h>

void main() {
    int x,y;
    printf("Input two integers, separated by a space: ");
    scanf("%i %i", &x, &y);
    if (x % y == 0 || y % x == 0) {
        printf("Multiples");
    } else {
        printf("Not multiples");
    }
}