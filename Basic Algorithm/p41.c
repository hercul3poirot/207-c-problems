//40. Write a C program to create a new array taking the first and last elements of a given array of integers and length one or more.
#include <stdio.h>

int test(int arr[]) {
    for (int i = 0; i < 2; i++) {
        if (arr[i] == 15 || arr[i] == 20) {
            return 1;
        }
    }
    return 0; //Should be other way around
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