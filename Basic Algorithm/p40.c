//40. Write a C program to create a new array, taking the first and last elements 
//of a given array of integers, with length one or more.
#define MAX 1000
#include <stdio.h>

int main(void) {
    int nums[MAX], newArr[2], length;
    printf("Please enter the length of the original array: ");
    scanf("%d", &length);
    printf("Please enter the elements in your original array:\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &nums[i]);
    }
    newArr[0] = nums[0];
    newArr[1] = nums[length - 1];
    printf("Elements in new array are: %d, %d", newArr[0], newArr[1]);
    return 0;
}