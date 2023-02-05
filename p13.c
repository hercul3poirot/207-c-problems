//13. Write a C program to check if two given non-negative integers have the same last digit.
#include <stdio.h>

int main() {
    int x, y;
    printf("Please input integers x and y separated by a space: ");
    scanf("%d %d", &x, &y);
    (x % 10 == y % 10) ? printf("True") : printf("False");
    return 0;
}