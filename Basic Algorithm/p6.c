//6. Write a C program to check whether a given temperatures is less than 0 and the other is greater than 100.
#include <stdio.h>

int main() {
    int temp1, temp2;
    printf("Please input Temperature 1: ");
    scanf("%d", &temp1);
    printf("Please input Temperature 2: ");
    scanf("%d", &temp2); 
    if (temp1 < 0 && temp2 > 100) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}