//Write a C program to check two given integers, and return true if one of them is 30, or if their sum is 30.
#include  <stdio.h>

int main() {
    int x, y;
    printf("Enter first value: ");
    scanf("%d", &x);
    printf("Enter second value: ");
    scanf("%d", &y);
    if (x + y == 30 || x == 30 || y == 30) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}