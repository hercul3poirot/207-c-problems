//39. Write a C program to create a new array containing the middle elements 
//from the two given arrays of integers, each length 5.
//This also marks the age of the new format (UNSW style)

#include <stdio.h>

int main(void) {
    int nums1[5] = {10, 20, -30, -40, 30}, nums2[5] = {10, 20, 30, 40, 30}, newArr[2];
    printf("Elements in original array are:\n");
    //Efficiency can go to hell:
    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", nums1[i]);
        } else {
            printf("%d, ", nums1[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", nums2[i]);
        } else {
            printf("%d, ", nums2[i]);
        }
    }
    printf("\n");
    newArr[0] = nums1[2];
    newArr[1] = nums2[2];
    printf("Elements in new array are: %d, %d", newArr[0], newArr[1]);
    return 0; 
}