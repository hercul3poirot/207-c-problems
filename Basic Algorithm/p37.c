//37. Write a C program to rotate the elements of a given array of integers (length 4 ) in left direction and return the new array.
#include <stdio.h>

int main() {
    int numbers[4] = {10, 20, 30, 40}, temp;
    printf("Elements in original array are: ");
    for (int i = 0; i < 4; i++) {
        printf("%i ", numbers[i]);
    }
    temp = numbers[0];
    for (int i = 1; i < 4; i++) {
        numbers[i - 1] = numbers[i];
    }
    numbers[3] = temp;
    printf("\nElements in new array are: ");
    for (int i = 0; i < 4; i++) {
        printf("%i ", numbers[i]);
    }
    return 0;
}