// 47. Write a C program to create a new array from two given array of integers,
// each length 3.
#include <stdio.h>

void printArr(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        printf("%i, ", arr[i]);
    }
    printf("%i", arr[length - 1]);
}

int main(void) {
    int arr_size = 3;
    
    int nums1[] = {10, 20, 30};
    printf("Elements in first array are: ");  
    printArr(nums1, arr_size);    
    
    int nums2[] = {40, 50, 60};
    printf("\nElements in second array are: ");  
    printArr(nums2, arr_size);   
    
    int newArr[] = {0};
    for (int i = 0; i < arr_size; i++) {
        newArr[i] = nums1[i];
        newArr[3 + i] = nums2[i];
    }

    printf("\nNew array: ");  
    printArr(newArr, arr_size * 2);   

    printf("\n");
    return 0;
}