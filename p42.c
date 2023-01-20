//42. Write a C program to print a number, its' square and its' cube in a line, starting from 1. Print n lines, where n is an integer (from the user.)
#include <stdio.h>

int squared(int number){
    return number*number;
}

int cubed(int number){
    return number*number*number;
}

int main() {
    int n;
    printf("Input number of lines: ");
    scanf("%i", &n);
    for (int i = 1; i <= n; i++) {
        printf("%i %i %i\n", i, squared(i), cubed(i));
    }
    return 0;
}