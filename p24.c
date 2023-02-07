//24. Write a C program to check whether y is greater than x, and z is greater than y from three given integers x, y, z.
#include <stdio.h>

int main() {
    int x, y, z;
    printf("Please enter integers x, y and z, separated by commas: ");
    scanf("%d, %d, %d", &x, &y, &z);
    if (y > x && z > y) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}