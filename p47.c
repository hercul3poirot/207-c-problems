//Write a C program that reads an integer and finds all its divisors.
#include <stdio.h>

void main(){
    int inputNum;
    printf("Input an integer: ");
    scanf("%i", &inputNum);
    printf("All the divisors of %i are:", inputNum);
    for (int i = 1; i <= inputNum; i++) {
        if (inputNum % i == 0) {
            printf("\n%i", i);
        }
    }
}