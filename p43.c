//43. Write a C program that reads two integers p and q, and print p number of lines in a sequence of 1 to q in a line.

#include <stdio.h>

void main() {
    int p,q;
    printf("Input number of lines: ");
    scanf("%i", &p);
    printf("Number of characters in a line: ");
    scanf("%i", &q);
    for (int i = 1; i <= p*q; i+=q) {
        for (int j = i; j <= i+(q-1); j++) {
            printf("%i ", j);
        }
        printf("\n");
    }
}