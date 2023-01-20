//22. Write a C program that reads 5 numbers and calculates the sum of all the odd numbers between them.
//EXPLANATION FOR ABOVE: Take 5 numbers, and only sum the odd numbers.
#include <stdio.h>

int main() {
    int sum = 0, tempNumber;
    for (int i=0; i < 5; i++) {
        printf("Enter number %i: ", i+1);
        scanf("%d", &tempNumber);
        if (tempNumber % 2 == 1) {
            sum += tempNumber;
        }
    }
    printf("Sum of all odd values: %i", sum);
    return 0;
}