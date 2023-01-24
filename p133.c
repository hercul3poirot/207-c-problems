//133. Write a C program to calculate the sum of two given integers, and count he number of digits of the sum's value.
#include <stdio.h>

int main() {
    int x, y, count, sum;
    printf("Input the two integer values:\n");
    scanf("%i", &x);
    scanf("%i", &y);
    sum = x + y;
    while (sum != 0) {
        sum -= (sum % 10);
        sum /= 10;
        count += 1;
    }
    printf("\nNumber of digits of the sum value of the said numbers:\n%i", count);
    return 0;
}