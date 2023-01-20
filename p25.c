//25. Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.
#include <stdio.h>

int main() {
    char *months[13] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthInt;
    printf("Input a number between 1 to 12 to get the month's name: ");
    scanf("%i", &monthInt);
    printf("%s", months[monthInt-1]);
    return 0;
}