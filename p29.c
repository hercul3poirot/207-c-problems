//29. Write a C program that reads 5 numbers, and sums all the odd numbers given. (SAME AS PROBLEM 22)
#include <stdio.h>

void main() {
    int sum = 0, tempNumber;
    for (int i=0; i < 5; i++) {
        printf("Enter number %i: ", i+1);
        scanf("%d", &tempNumber);
        if (tempNumber % 2 == 1) {
            sum += tempNumber;
        }
    }
    printf("Sum of all odd values: %i", sum);
}