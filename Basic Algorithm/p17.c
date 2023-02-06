//17. Write a C program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.
#include <stdio.h>

int test() {
    int x, y;
    printf("Please input integers x and y, separated by a comma: ");
    scanf("%d, %d", &x, &y);
    if ((x + y) >= 10 && (x + y) <= 20) {
        return 30;
    } else {
        return 0;
    }
}

//Driver:
int main() {
    printf("%i", test());
}