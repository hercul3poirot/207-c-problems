//21. Write a C program that reads an integer and checks the specified range where it belongs. Print an error message if the number is negative and greater than 80.
#include <stdio.h>

void main() {
    int inputNumber;
    printf("Input an integer: ");
    scanf("%i", &inputNumber);
    if (inputNumber >= 0 && inputNumber <= 20){
        printf("Range [0,20]\n");
    }
    else if (inputNumber > 20 && inputNumber <= 40){
        printf("Range (20,40]\n");
    }
    else if (inputNumber > 40 && inputNumber <= 60){
        printf("Range (40,60]\n");
    }
    else if (inputNumber > 60 && inputNumber <= 80){
        printf("Range (60,80]\n");
    }
    else {
        printf("Number is outside the range.");
    }
}