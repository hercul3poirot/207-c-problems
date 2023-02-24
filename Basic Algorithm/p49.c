// 49. Write a C program to create a new array of length 3 from a given array
// length atleast 3) containing the elements from the middle of the array.
#include <stdio.h>

void printArr(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        printf("%i, ", arr[i]);
    }
    printf("%i", arr[length - 1]);
}

int main(void) {
    int arr_size1;
    int nums1[] = { 1, 5, 7, 9, 11, 13 };
    arr_size1 = sizeof(nums1)/sizeof(nums1[0]);
    printf("Original elements in array are: ");
    printArr(nums1, arr_size1);
    int middle = arr_size1 / 2;
    int nums2[] = 
    {nums1[middle - 1], nums1[middle], nums1[middle + 1]};
    printf("\nNew elements of array are: ");
    printArr(nums2, 3);
    printf("\n");
    return 0;
}