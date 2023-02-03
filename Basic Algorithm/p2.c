//2. Write a C program to get the absolute difference between n and 51. If n is greater than 51, return triple the absolute difference.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, difference;
    printf("Please input integer n: ");
    scanf("%d", &n);
    difference = abs(51 - n);
    if (n > 51) {
        printf("The result is %d", 3*difference);
    } else {
        printf("The result is %d", difference);
    }
    return 0;
}