//131. Write a C program that accepts two strings and checks whether the second string is present in the last part of the first string.
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char first[MAX], second[MAX], secondInFirst = 0;
    int lenOne, lenTwo;
    printf("Enter the first string:\n");
    scanf("%s", &first);
    printf("Enter the first string:\n");
    scanf("%s", &second);
    lenOne = strlen(first) - 1;
    lenTwo = strlen(second) - 1;
    for (int i = lenOne, j = lenTwo; lenTwo != 0; lenOne--, lenTwo--) {
        if (first[lenOne] != second[lenTwo]) {
            secondInFirst = 1;
            break;
        }
    }
    printf("Is second string present in the last part of the first string?\n");
    if (secondInFirst == 1){
        printf("Not Present!");
    } else {
        printf("Present!");
    }
    return 0;
}