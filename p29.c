//29. Write a C program to compute the sum of three given integers. If the two values are the same, return the third value.
#include <stdio.h>

int test() {
    int x, y, z, sum;
    printf("Please enter integers x, y and z, separated by commas: ");
    scanf("%d, %d, %d", &x, &y, &z);
    sum = x + y + z;
    printf("The sum of the integers is %d", sum);
    if (x == y) {
        return z;
    } 
    else if (x == z) {
        return y;
    }
    else if (z == y) {
        return x;
    } else {
        return 0;
    }
}

//Driver:
int main() {
    printf("\n%d", test());
    return 0;
}