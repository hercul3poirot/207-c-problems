//8. Write a C program to check whether three given integer values are in the range 20 - 50, inclusive.
#include <stdio.h>

int main() {
    int x, y, z;
    printf("Please input x, y and z, separated by a space: ");
    scanf("%d %d", &x, &y);
    if ((x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50)) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}