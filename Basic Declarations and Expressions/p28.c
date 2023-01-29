//28. Write a C program that reads 5 numbers, counts the number of positive numbers, and prints the average of all positive values.
#include <stdio.h>

int main() {
    int positiveCount, sum = 0, tempNumber;
    for (int i = 1; i <= 5; i++) {
        printf("Enter number %i: ", i);
        scanf("%i", &tempNumber);
        if (tempNumber >= 0) {
            positiveCount += 1;
            sum += tempNumber;
        }
    }
    printf("Number of positive numbers: %i\nAverage value of the said positive numbers: %.2f", positiveCount, sum/positiveCount);
    return 0;
}
