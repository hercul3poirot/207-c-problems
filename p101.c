//101. There are three given ranges, write a C program that reads a floating-point number and find the range where it belongs from four given ranges.
#include <stdio.h>

void main() {
    float inputNum;
    printf("Input a number: ");
    scanf("%f", &inputNum);
    if (inputNum <= 30 && inputNum >= 0){
        printf("Range: [0,30]");
    }
    else if (inputNum <= 50 && inputNum > 30){
        printf("Range: (30,50]");
    }
    else if (inputNum <= 80 && inputNum > 50){
        printf("Range: (50,80]");
    }
    else if (inputNum <= 100 && inputNum >= 80){
        printf("Range: (80,100]");
    } else {
        printf("Sorry, the number is out of range, please enter a new one.");
    }
}