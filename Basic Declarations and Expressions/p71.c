//71. Write a C program to copy a given string into another and count the number of characters copied.
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char originalString[MAX], copyString[MAX];
    int length;
    printf("Input a string: ");
    scanf("%s", &originalString);
    printf("Original string: %s\n", originalString);
    strcpy(copyString, originalString);
    length = strlen(copyString);
    printf("Number of characters = %i", length);
    return 0;
}
