//10. Write a C program to check which number nearest to the value 100 among two given integers. Return whether the two numbers are equal.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    printf("Please input integers x and y, separated by a comma: ");
    scanf("%d, %d", &x, &y);
    if (x == y) {
        printf("The numbers are equal.");
    } else if (abs(100 - x) > abs(100 - y)) {
        printf("The integer closer to 100 is %d (y).", y);
    } else {
        printf("The integer closer to 100 is %d (x).", y);
    }
    return 0;
}
