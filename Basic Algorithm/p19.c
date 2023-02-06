//19. Write a C program to to test whether a given non-negative number is a multiple of 13 or it is one more than a multiple of 13.
#include <stdio.h>

int main() {
    int x;
    printf("Please input an integer: ");
    scanf("%i", &x);
    if (x % 13 == 0 || x % 13 == 1) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}