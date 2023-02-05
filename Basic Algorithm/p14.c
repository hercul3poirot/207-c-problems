//14. Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numArr[] = {4, 5, 6, 7, 8, 9, 2031, 29, 1, 2, 3}, length = sizeof(numArr)/sizeof(numArr[0]);
    for (int i = 0; i <= length; i++) {
        if (numArr[i] == 1 && numArr[i + 1] == 2 && numArr[i + 2] == 3) {
            printf("True");
            exit(0);
        } 
    }
    printf("False");
    return 0;
}
