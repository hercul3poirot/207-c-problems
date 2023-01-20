//90. Write a C program to find all prime palindromes in the range of two given numbers x and y (5 <= x < y <= 100,000,000)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char * convertNumberIntoArray(unsigned int number) {
    unsigned int length = (int)(log10((float)number)) + 1;
    char * arr = (char *) malloc(length * sizeof(char)), * curr = arr;
    do {
        *curr++ = number % 10;
        number /= 10;
    } while (number != 0);
    return arr;
}

int isPrime(int number){
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isPalindrome(char *digits) {
    int same = 1, checkValue, length;
    length = strlen(digits);
    if (length % 2 == 0){
        checkValue = length/2 - 1;
    } else {
        checkValue = (length-1)/2 - 1;
    }
    for (int i = 0; i <= checkValue; i++){
        if (digits[i] == digits[(length-1) - i]) {
            same = 1;
        } else {
            return 0;
        }
    }   
    if (same == 1){
        return 1;
    }
}

int main() {
    int x,y;
    char *arrNum;
    printf("Input two numbers (separated by a space): ");
    scanf("%i %i",&x,&y);
    printf("List of prime palindromes:");
    for (int i = x; i < y; i++){
        arrNum = convertNumberIntoArray(i); 
        if (isPalindrome(arrNum) == 1) {
            printf("\n%i is palindrome",i);
        }
    }
    return 0;
}