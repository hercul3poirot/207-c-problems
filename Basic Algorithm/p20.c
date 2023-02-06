//20. Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not both.
#include <stdio.h>

int main() {
    int x;
    printf("Please input an integer: ");
    scanf("%i", &x);
    if ((x % 3 == 0 && x % 7 != 0) || (x % 7 == 0 && x % 3 != 0)) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}