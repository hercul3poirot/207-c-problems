//68. Write a C program to print the powers of 2 table for the power 0 to 10, both positive and negative.
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 100

int toThePowerOf(int number, int exponent) {
    if (exponent == 1) {
        return number;
    } else {
        return number * toThePowerOf(number, exponent-1);
    }
}

int main() {
    int tempNum;
    double tempFracNum;
    printf("==============================\n");
    printf("n 2 to power n 2 to power -n\n"); //I think thats the title that they want???
    for (int i = 1; i <= 10; i++) {
        tempNum = toThePowerOf(2,i);
        tempFracNum = (double)1/tempNum;
        printf("%i %i %.13f\n",i,tempNum,tempFracNum);
    }
    printf("==============================");
    return 0;
}
