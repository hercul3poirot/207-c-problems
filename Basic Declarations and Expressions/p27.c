//27. Write a C program that reads 5 numbers, and counts the number of positive numbers and negative numbers. 
#include <stdio.h>

int main() {
    int positiveCount, negativeCount, tempNumber;
    for (int i = 1; i <= 5; i++) {
        printf("Enter number %i: ", i);
        scanf("%i", &tempNumber);
        if (tempNumber >= 0) {
            positiveCount += 1;
        } else {
            negativeCount += 1;
        }
    }
    printf("Number of positive numbers: %i\nNumber of negative numbers: %i", positiveCount, negativeCount);
    return 0;
}
