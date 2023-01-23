//124. Write a C program that reads an array of integers (length 7), replace every negative or null element by 1, printing the array elements. 
#define LENGTH 7 //Reworked so it works with an array of any length, just change this variable!
#include <stdio.h>

int main() {
    int array_nums[LENGTH], element;
    printf("Input %i array elements:\n", LENGTH);
    for (int i = 0; i < LENGTH; i++) {
        scanf("%i", &element);
        if (element > 0) {
            array_nums[i] = element;
        } else {
            array_nums[i] = 1;
        }
    }
    printf("\nArray elements:");
    for (int i = 0; i < LENGTH; i++) {
        printf("\narray_nums[%i] = %i", i, array_nums[i]);
    }
    return 0;
}