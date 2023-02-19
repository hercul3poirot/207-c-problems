// 46. Write a C program to create an array taking two middle elements from a 
// given array of integers of even length.
#include <stdio.h>

void printArr(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        printf("%i, ", arr[i]);
    }
    printf("%i", arr[length - 1]);
}

int main(void) {
    int nums[] = {1, 5, 7, 9, 11, 13}, length = sizeof(nums)/sizeof(nums[0]),
        half = length / 2;
    printf("Elements in original array are: ");
    printArr(nums, length);
    printf("\nNew array: %i, %i\n", nums[half - 1], nums[half]);
    return 0;
}