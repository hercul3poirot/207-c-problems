//82. Write a C program that reads in a five-digit integer and determines whether or not it's a palindrome.
//REWORKED: Made it so it checks for an n-length integer^^^^
#include <stdio.h>
#include <string.h>

int main() {
    char *digits;
    int length, same = 1, checkValue;
    printf("Input a number: ");
    scanf("%s", digits);
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
            same = 0;
            printf("%s is not a palindrome.", digits);
            break;
        }
    }   
    if (same == 1){
        printf("%s is a palindrome.", digits);
    }
    return 0;
}