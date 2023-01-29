//57. Write a C program to reverse and print a given number.
#include <stdio.h>

int main() {
    int number, temp, reverse = 0;
    char charNum[99], charRev[99];
    printf("Input a number: ");
    scanf("%i", &number);
    printf("The original number = %i", number);
    while (number >= 1){
        temp = number % 10;
        reverse = reverse*10 + temp;
        number = number/10;
    }
    printf("\nThe reverse of the said number = %i", reverse);
    return 0;
}
