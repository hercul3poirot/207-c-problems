//52. Write a C program to read an array of length 6 and find the smallest element and its position.
#include <stdio.h>

void main() {
    int array_n[5], smallestNum = NULL, position;
    printf("Input the 5 members of the array:\n");
    for (int i = 0; i <= 4; i++) {
        scanf("%i", &array_n[i]);
        if (smallestNum == NULL) {
            smallestNum = array_n[i];
            position = i;
        } 
        else if (array_n[i] < smallestNum) {
            smallestNum = array_n[i];
            position = i;
        }
    }
    printf("Smallest value: %i\nPosition of the element: %i", smallestNum, position);
}