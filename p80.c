//80. Write a C program that reads the side (side sizes between 1 and 10) of a square and prints square using hash (#) characters.
#include <stdio.h>

void main() {
    int size;
    printf("Input the size of the square: ");
    scanf("%i", &size);
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            printf(" #");
        }
        printf("\n");
    }
}