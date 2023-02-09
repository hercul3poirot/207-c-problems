//34. Write a C program to check a given array of integers of length 1 or more and return true if the first element and the last element are equal in the given array. 
#include <stdio.h>

int test(int arr[]) {
    int length = sizeof(arr)/sizeof(arr[0]);
    if (arr[0] == arr[length - 1]) {
        return 1;
    } else {
        return 0;
    }
}

//Driver:
int main() {
    int array[] =  {12, 24, 35, 55};
    printf("%d", test(array));
}