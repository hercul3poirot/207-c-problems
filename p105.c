//105. Write a C program that accepts seven floating point numbers, and counts the number of positive and negative numbers. 
//After this, print the average of all the positive and negative values, with two digits after the decimal number. 
#include <stdio.h>

void main(){
    float temp, posSum, negSum;
    int posCount, negCount;
    posCount = negCount = 0;
    printf("Input 7 numbers(int/float):\n");
    for (int i = 0; i < 7; i++){
        scanf("%f", &temp);
        if (temp >= 0){
            posCount++;
            posSum += temp;
        } else {
            negCount++;
            negSum += temp;
        }
    }
    printf("\nNumber of positive numbers: %i", posCount);
    printf("\nAverage: %.2f", posSum/posCount);
    printf("\n\nNumber of negative numbers: %i", negCount);
    printf("\nAverage: %.2f", negSum/negCount);
}