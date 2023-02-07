//28. Write a C program to check two given integers, each in the range 10 to 99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33.
#include <stdio.h>

int main() {
    int x, x1, x2, y, y1, y2;
    printf("Please input integers x and y, separated by a comma: ");
    scanf("%d, %d", &x, &y);
    //Digit in the one's position
    x1 = x % 10;
    y1 = y % 10;
    //Digit in the ten's position;
    x2 = x - x1;
    y2 = y - y1;
    if (x2 != 0 && y2 != 0) {
        if (x1 == y1 || y1 == y2 || x1 == y2 || x2 == y1) {
            printf("True");
        } else {
            printf("False");
        }
    } else {
        printf("False");
    }
    return 0;
}