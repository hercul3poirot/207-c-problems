//18. Write a C program that accept two integers and return true if either one is 5 or their sum or difference is 5.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    printf("Please input integers x and y separated by a space: ");
    scanf("%d %d", &x, &y);
    if (x == 5 || y == 5 || x + y == 5 || abs(x - y) == 5) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}