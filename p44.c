//44. Write a C program to calcualte the average marks of mathematics of some students. Input 0 (excluding to calculate the average) or negative value to terminate the input process.
#include <stdio.h>

int main() {
    int tempResult, sum = 0, count = 0;
    float average;
    do {
        printf("Input Mathematics marks (0 or lower to terminate): ");
        scanf("%i", &tempResult);
        if (tempResult > 0){
            count += 1;
            sum += tempResult;
        }
    } while (tempResult > 0);
    average = (float)sum/count;
    printf("Average marks in mathematics: %.2f", average);
    return 0;
}