//65. Write a C program that prints out the prime numbers between 1 and 200. The output should be such that each row contains a maximum of 10 prime numbers.
#include <stdio.h>

int isPrime(int num){
    int result = 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0){
            result = 0;
            break;
        } 
    }
    return result;
}

int main() {
    int count;
    printf("The prime numbers between 1 and 200 are:");
    for (int i = 1; i < 200; i++) {
        if (isPrime(i)){
            if (count % 10 == 0){
                printf("%i\n", i);
            } else {
                printf("%i ", i);
            }
            count += 1;
        }
    }
    return 0;
}
