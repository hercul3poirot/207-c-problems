//50. Write a C program to find the largest value from first, last, and middle 
// elements of a given array of integers of odd length (atleast 1).
#include <stdio.h>
#include <stdlib.h>

int test(int arr[], int length) {
    int start = arr[0], end = arr[length - 1], middle = arr[length/2];
    if (start > end && start > middle) {
        return start;
    } else if (end > start && end > middle) {
        return end;
    } else {
        return middle;
    }
}

int main(void) {
    int arr_size;
    int array1[] = {1};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {1,2,9};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] = {1,2,9,3,3};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
    printf("\n");
    return 0;
}
