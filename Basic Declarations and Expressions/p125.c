//125. Write a C program that reads an array of integers (length 7), and only take the first element as an input.
//From there on, each value of the array should be double the previous.
#include <stdio.h>
#define LENGTH 7

int main() {
    int num, array_nums[LENGTH];
    printf("Input the first element of the array:\n");
    scanf("%i", &num);
    printf("\nArray elements:");
    for (int i = 0; i < 7; i++) {
        if (i == 0) {
            array_nums[i] = num;
        } else {
            array_nums[i] = 2 * array_nums[i-1];
        }
        printf("\narray_nums[%i] = %i", i, array_nums[i]);
    }

    return 0;
}
