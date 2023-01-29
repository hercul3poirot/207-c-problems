//126 Write a C program that reads an array (length 7), and prints all array positions that store a value less or equal to 0. 
#define LENGTH 7
#include <stdio.h> 

int main() {
    int array_nums[LENGTH], element, count = 0;
    printf("Input %i array elements:\n", LENGTH);
    for (int i = 0; i < LENGTH; i++) {
        scanf("%i", &element);
        array_nums[i] = element;
    }
    printf("\nArray positions that store a value less or equal to 0:");
    for (int i = 0; i < LENGTH; i++) {
        if (array_nums[i] <= 0) {
            printf("\narray_nums[%i] = %i", i, array_nums[i]);
        }
    }
    return 0;
}
