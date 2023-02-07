//23. Write a C program to check whether it is possible to add two integers to get the third integer from three given integers.
#include <stdio.h>

//Function version (not used for the program below):
int test(int x, int y, int z) {
    return ((x + z == y) || (z + y == x) || (x + y == z));
}

int main() {
    int x, y, z;
    printf("Please enter integers x, y and z, separated by commas: ");
    scanf("%d, %d, %d", &x, &y, &z);
    if (x + y == z) {
        printf("x + y = z");
    } else if (x + z == y) {
        printf("x + z = y");
    } else if (z + y == x) {
        printf("z + y = x");
    } else {
        printf("Unfortunately, no combination of two integers add to the third.");
    }
    return 0;
}