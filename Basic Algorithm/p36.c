//36. Write a C program to compute the sum of the elements of a given array of integers.
#include <stdio.h>
#include <stdlib.h>

int sum(int arr[]) {
    int sum = 0;
    for (int i = 0; i <= 5; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(void){    
     int array1[] = {10, 20, 30, 40, 50};
     int array2[] = {10, 20, -30, -40, 50};
     printf("%d", sum(array1));
     printf("\n%d", sum(array2));
}  