//64. Write a C program that accepts integers from the user until a zero or negative number, display the number of positive values, the minimum value, the maximum valuue and the average of all numbers.
#include <stdio.h>

void main(){
    int sum = 0, count = 0, maxNum = NULL, minNum = NULL, tempNum;
    float average;
    do {
        printf("Input positive integer: ");
        scanf("%i", &tempNum);
        if (tempNum > 0) {
            sum += tempNum;
            count += 1;
            maxNum = (tempNum > maxNum || maxNum == NULL) ? tempNum : maxNum; 
            minNum = (tempNum < minNum || minNum == NULL) ? tempNum : minNum; 
        }
    } while (tempNum > 0);
    average = sum/count;
    printf("Number of positive values entered is %i", count);
    printf("\nMaximum value entered is %i", maxNum);
    printf("\nMinimum value entered is %i", minNum);
    printf("\nAverage value is %.2f", average);
}