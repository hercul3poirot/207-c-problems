//21. Write a C program to check whether a given number is within 2 of a multiple of 10.
#include <stdio.h>

int main() {
    int x;
    printf("Please input an integer: ");
    scanf("%i", &x);
    if (x % 10 == 8) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}