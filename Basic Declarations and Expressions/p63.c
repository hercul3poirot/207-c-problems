//63. Write a C program that accepts a positive integer less than 100 from the user and prints out the sum 1⁴ + 2⁴ + 4⁴ + 7⁴ + ... + m⁴, where m <= n.
#include <stdio.h>

int expoFour(int i) {
    return i*i*i*i;
}

int fibbonaci(int i) {
    if (i == 1) {
        return 1;
    } else {
        return (i-1) + fibbonaci(i-1);
    }
}

int main() {
    int number, sum = 0, sequence = 1;
    printf("Input a positive number less than 100: ");
    scanf("%i", &number);
    do {
        sum += expoFour(fibbonaci(sequence));
        sequence += 1;
    } while (fibbonaci(sequence) <= number);
    printf("Sum of the series is %i", sum);
    return 0;
}
