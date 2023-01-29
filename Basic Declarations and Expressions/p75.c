//75. Write a C program that accepts one seven-digit number, seperates the number into its individual digits, and prints the digits seperated from one another by two spaces each.
#include <stdio.h>

int main() {
    char inputNum[7];
    printf("Input a seven digit number: ");
    scanf("%s", inputNum);
    for (int i = 0; i < 7; i++) {
        printf("%c  ", inputNum[i]);
    }
    return 0;
}
