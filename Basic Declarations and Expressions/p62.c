//62. Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.
#include <stdio.h>

int main() {
    int number, hundreds, tens, ones, digitSum;
    printf("Input a positive number less than 500: ");
    scanf("%i", &number);
    ones = number % 10;
    tens = ((number % 100) - ones)/10;
    hundreds = (number - ones - tens)/100;
    digitSum = ones + tens + hundreds;
    printf("Sum of the digits of %i is %i", number, digitSum);
    return 0;
}
