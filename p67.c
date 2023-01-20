//67. Write a C program to evalaute the equation y=xn when n is a non negative integer.
#include <stdio.h>
#include <math.h>

int toThePowerOf(int number, int exponent) {
    if (exponent == 1) {
        return number;
    } else {
        return number * toThePowerOf(number, exponent-1);
    }
}

int main() {
    int x,n,result;
    printf("Input the values of x and n, seperated by a space: ");
    scanf("%i %i", &x, &n);
    printf("x=%i; n=%i\n", x,n);
    result = toThePowerOf(x,n);
    printf("x to the power of n = %i", result);
    return 0;
}