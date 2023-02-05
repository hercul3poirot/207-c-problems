//9. Write a C program to check whether two given integer values are in the range 20..50 inclusive. 
#include <stdio.h>

int main() {
    int x, y;
    printf("Please input integers x and y, separated by a space: ");
    scanf("%d %d", &x, &y);
    if ((x >= 20 && x <= 50) || (y >= 20 && y <= 50)) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}