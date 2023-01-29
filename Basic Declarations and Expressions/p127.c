//127. Write a C program that reads an array of integers (length 8), replace the 1st by the 8th, 2nd, 7th and so on. Print the final array. \
//Rework for so it works for lists of all length.
#define LENGTH 8
#include <stdio.h>

int main() {
    int array_nums[LENGTH], lim, swaptemp;
    printf("Input %i array elements:\n", LENGTH);
    for (int i; i < LENGTH; i++) {
        scanf("%i", &array_nums[i]);
    }
    if (LENGTH % 2 == 0) {
        lim = LENGTH/2;
    } else {
        lim = LENGTH / 2 - 1;
    }
    for (int i = 0; i <= lim; i++) {
        swaptemp = array_nums[LENGTH - (1 + i)];
        array_nums[LENGTH - (1 + i)] =  array_nums[i];
        array_nums[i] = swaptemp;
    }
    printf("\nModified array:");
    for (int i = 0; i < LENGTH; i++) {
        printf("\narray_nums[%i] = %i", i, array_nums[i]);
    }
    return 0;
}
