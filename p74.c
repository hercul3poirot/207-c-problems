//74. Write a C program to display the integer equivalents of letters (a-z, A-Z)
#include <stdio.h>

int main() {
    char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("List of integer equivalents of letters (a-z, A-Z).\n");
    printf("==================================================\n");
    for(int i = 0; i < 52; i++) {
        printf("%d ", letters[i]);
    }
    return 0;
}