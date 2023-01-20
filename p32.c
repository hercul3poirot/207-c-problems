//32. Write a C program to print all numbers between 1 to 100 which, when divided by a specific integer, will give a remainder of 3.
#include <stdio.h>

int main() {
    int divisor;
    printf("Input the divisor: ");
    scanf("%i", &divisor);
    for (int i = 1; i < 100; i++) {
        if (i % divisor == 3) {
            printf("%i\n", i);
        }
    }
    return 0;
}