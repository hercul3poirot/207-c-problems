//118. Write a C program that reads five subject marks (0-100) of a student, calculating the average of these marks.
#include <stdio.h>

int main() {
    int sum = 0, temp;
    float average;
    printf("Input five subject marks (0-100):\n");
    for (int i = 1; i <= 5; i++) {
        scanf("%i", &temp);
        sum += temp;
    }
    average = sum / 5.0;
    printf("%i Average mark: %.2f", sum, average);
    return 0;
}
