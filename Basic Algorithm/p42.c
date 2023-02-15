//42. Write a C program to check whether a given array of integers of length 2, does not contain 15 or 20.
#include <stdio.h>

int test(int arr[]) {
    for (int i = 0; i < 2; i++) {
        if (arr[i] == 15 || arr[i] == 20) {
            return 0;
        }
    }
    return 1; //Should be other way around
}

int main(void) {
    int array1[] = {12, 20};
    printf("%d",test(array1));
    int array2[] = {14, 15};
    printf("\n%d",test(array2));
    int array3[] =  {11, 21};
    printf("\n%d",test(array3));
    return 0;
}