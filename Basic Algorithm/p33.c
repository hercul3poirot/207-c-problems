//33. Write a C program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is same.
#include <stdio.h>

int main() {
    int small, medium, large;
    printf("Please input integers small, medium and large seperated by (commas): ");
    scanf("%d, %d, %d", &small, &medium, &large);
    if (medium - small == large - medium) {
        return 1;
    } else {
        return 0;
    }
}