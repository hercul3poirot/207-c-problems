//40. Write a C program to find all numbers which, when divided by 7, have a remainder of 2 or 3 between two integer numbers.
#include <stdio.h>

void main () {
    int x,y;
    printf("Input the first integer: ");
    scanf("%i", &x);
    printf("Input the second integer: ");
    scanf("%i", &y);
    for (int i = x; i < y; i++) {
        if (i % 7 == 2 || i % 7 == 3) {
            printf("%i\n",i);
        }
    }
}