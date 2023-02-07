//Write a C program to compute the sum of two given integers. If one of the given integer's value is in the range of 10 to 20, inclusive, return 18.
#include <stdio.h>

int test() {
    int x, y;
    printf("Please input integers x and y, separated by a comma: ");
    scanf("%d, %d", &x, &y);
    printf("The sum of x and y is: %d", x + y);
    if ((x >= 10 && x <= 20) || (y >= 10 && y <= 20)) {
        return 18;
    } else {
        return 0;
    }
}

//Driver:
int main() {
    printf("\n%d", test());
    return 0;
}