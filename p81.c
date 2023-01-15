//81. Write a C program that reads the side (side sizes between 1 and 10) of a square, and prints a hollow square using hash (#) characters.
#include <stdio.h>

void main() {
    int size;
    printf("Input the size of the square: ");
    scanf("%i", &size);    
    for (int j = 1; j <= size; j++){
        if (j == 1 || j == 10){
            printf("##########");
        }
        else {
            printf("#        #");
        }
        printf("\n");
    }
}