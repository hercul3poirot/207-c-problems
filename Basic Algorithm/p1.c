//1. Write a C program to compute the sum of the two given integer values.
//If the two values are the same, then return triple their sum.
#include  <stdio.h>

int main() {
    int x, y;
    printf("Enter first value: ");
    scanf("%d", &x);
    printf("Enter second value: ");
    scanf("%d", &y);
    if (x == y) {
        printf("Answer is %d", 3*(x + y));
    } else {
        printf("Answer is %d", x + y);
    }
    return 0;
}
