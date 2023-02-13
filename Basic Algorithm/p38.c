//38. Write a C program to reverse a given array of integers length 5.
#include <stdio.h>

int main() {
    int arrOrg[5] = {10, 20, 30, 40, 50}, arrRev[5] = {0};
    printf("Elements in original array are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrOrg[i]);
        arrRev[4 - i] = arrOrg[i];
    }
    printf("\nElements in reverse array are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrRev[i]);
    }

    return 0;
}