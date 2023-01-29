//93. Write a C program to check if a given number is nearly prime or not.
#include <stdio.h>

int isPrime(int number){
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int inputNum, div1, div2, nearlyP = 0;
    printf("Enter a number: ");
    scanf("%i", &inputNum);
    for (int i = 2; i < inputNum; i++) {
        if (isPrime(i) == 1 && isPrime(inputNum/i) == 1 && inputNum % i == 0) {
            nearlyP = 1;
            break;
        }
    }
    if (nearlyP == 0) {
        printf("It is not a Nearly prime number.");
    } else {
        printf("It is a nearly prime number.");
    }
    return 0;
}
