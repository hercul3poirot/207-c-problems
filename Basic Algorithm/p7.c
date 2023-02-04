//7. Write a C program to check two given integers whether either of them is in the range 100 - 200, inclusive.
#include <stdio.h>

int main() {
    int x, y;
    printf("Please input x and y, separated by a space: ");
    scanf("%d %d", &x, &y);
    if ((x >= 100 && x <= 200) || (y >= 100 && y <= 200)) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}