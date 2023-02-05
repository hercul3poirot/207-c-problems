//1. Write a C program to check whether two given integers are in in the range 40 to 50 inclusive, or that they are both in the range 50 to 60 inclusive.
#include <stdio.h>

int main() {
    int x, y;
    printf("Please input integers x and y separated by a space: ");
    scanf("%d %d", &x, &y);
    if ((x >= 40 && x <= 50) || (y >= 40 && y <= 50)) {
        printf("True");
    } else if ((x >= 50 && x <= 60) && (y >= 50 && y <= 60)){
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}