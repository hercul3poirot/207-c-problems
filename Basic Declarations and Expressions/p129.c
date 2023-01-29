//129. Write a C program that reads a starting number and places it as the first element of an array, with each subsequent element being a third of the previous.
#include <stdio.h>
#define LENGTH 10

int main() {
    float start, array_nums[LENGTH];
    printf("Enter a starting number:\n");
    scanf("%f", &start);
    printf("\nArray elements:");
    for (int i = 0; i < LENGTH; i++) {
        if (i == 0) {
            array_nums[i] = start;
        } else {
            array_nums[i] = array_nums[i-1] / 3.0;
        }
        printf("\narray_nums[%i] = %f", i, array_nums[i]);
    }
    return 0;
}
