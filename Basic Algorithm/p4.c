//4. Write a C program to check a given integer and return true if it is within 10 of 100 or 200.
#include <stdio.h>

int main() {
    int n;
    printf("Please input an integer: ");
    scanf("%d", &n);
    if ((n >= 90 && n <= 110) || (n >= 190 && n <= 210)) {
        printf("True");    
    } else {
        printf("False");
    }
    return 0;
}