// Write a C program to create a new array swapping the first and last elements 
// of a given array of integers and length will be least 1.  
#include <stdio.h>

void printArr(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        printf("%i, ", arr[i]);
    }
    printf("%i", arr[length - 1]);
}

int main(void) {
    int arr_size1, nums1[] = {1, 5, 7, 9, 11, 13}, temp;
    arr_size1 = sizeof(nums1)/sizeof(nums1[0]);
    printf("Elements in original array1 are: ");
    printArr(nums1, arr_size1);
    temp = nums1[arr_size1 - 1];
    nums1[arr_size1 - 1] = nums1[0];
    nums1[0] = temp;
    printf("\nNew array, after swapping first and last elements: ");  
    printArr(nums1, arr_size1);
    printf("\n");
}