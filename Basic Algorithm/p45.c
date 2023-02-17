// 45. Write a C program to compute the sum of the two given arrays of integers 
// of length 3 and find the array which has the largest sum.
#include <stdio.h>

void moveArr(int arr1[], int arr2[], int length) {
    for (int i = 0; i < length; i++) {
        arr2[i] = arr1[i];
    }
}

void printArr(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        printf("%i, ", arr[i]);
    }
    printf("%i", arr[length - 1]);
}

int test(int arr1[], int arr2[], int result[]) {
    int sum1, sum2;
    sum1 = sum2 = 0; 
    for (int i = 0; i < 3; i++) {
        sum1 += arr1[i];
        sum2 += arr2[i];
    }
    (sum1 > sum2) ? moveArr(arr1, result, 3) : moveArr(arr2, result, 3);   
    return 0;
}

int main(void) {
    int biggestArr[3];
    int nums1[] = {10, 20, -30};
    printf("Elements in first original array are: ");  
    printArr(nums1, 3);    
    int nums2[] = {10, 20, 30};
    printf("\nElements in second original array are: ");  
    printArr(nums2, 3);
    test(nums1, nums2, biggestArr);
    printf("\nThe array which has the largest sum is: ");  
    printArr(biggestArr, 3); 
    printf("\n");
    return 0;
}