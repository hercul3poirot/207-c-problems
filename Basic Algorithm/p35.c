//35. Write a C program to check two given arrays of integers of length 1 or more and return true if they have the same first element or they have the same last element.
#include <stdio.h>
#include <stdlib.h>

int test(int arr1[], int arr2[], int len1, int len2) {
    if (arr1[0] == arr2[0] || arr1[len1 - 1] == arr2[len2 - 1]) {
        return 1;
    } else {
        return 0;
    }
}

int main(void){
    
    int array11[] = {10, 20, 40, 50};
    int arr_size11 = sizeof(array11)/sizeof(array11[0]);
    int array12[] = {10, 20, 40, 50};
    int arr_size12 = sizeof(array12)/sizeof(array12[0]);
    printf("%d",test(array11,array12,arr_size11,arr_size12));
    
    int array21[] = {10, 20, 40, 50};
    int arr_size21 = sizeof(array21)/sizeof(array21[0]);
    int array22[] = {11, 20, 40, 51};
    int arr_size22 = sizeof(array22)/sizeof(array22[0]);
    printf("\n%d",test(array21,array22,arr_size21,arr_size22));
    
    }  