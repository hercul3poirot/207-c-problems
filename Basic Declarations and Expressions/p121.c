//121. Write a C program that reads an integer, and finds all the factors of the integer.
#include <stdio.h>

int main() {
    int num;
    printf("Input a number (integer value):\n");
    scanf("%i", &num);
    printf("\nAll positive divisors of %i", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("\n%i", i);
        }
    }
    return 0;
}
