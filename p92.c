//92. Write a C program to find the last non-zero digit of the factorial of a given positive integer. 
#include <stdio.h>
#include <math.h>

int factorial(int number) {
    if (number == 0) {
        return 1;
    } else {
        return number * factorial (number - 1);
    }
}

void main() {
    int result, num, digit, flag = 0;
    printf("Input a positive number: ");
    scanf("%i", &num);
    result = factorial(num);
    do {
        digit = result % 10;
        if (digit != 0){
            break;
        } else {
            result /= 10 ;
        }
    } while (flag == 0);
    printf("The last non-zero digit of the said factorial:\n%i", digit);
}