//136. Write a C program to find the prime numbers which are les than or equal to a given integer.
#include <stdio.h>

int isPrime(int number){
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int num, count = 0;
    printf("Input a number:\n");
    scanf("%i", &num);
    printf("Number of prime numbers which are less than or equal to %i", num);
    for (int i = 2; i <= num; i++){
        if (isPrime(i) == 0) {
            count++;
        } 
    }
    printf("\n%i", count);
    return 0;
}