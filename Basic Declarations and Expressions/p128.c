//128. Write a C program that reads an array of integers (length 10), fill the array elements a number 0 to a given number n - 1, repeated until we reach the end of the array.
#include <stdio.h>
#define LENGTH 10

int main() {
    int lim, start = 0, array_nums[LENGTH];
    printf("Input an integer (2-10:\n");
    scanf("%i", &lim);
    for (int i = 0; i < LENGTH; i++) {
        if (start == lim) {
            start = 0;
        }
        array_nums[i] = start;
        printf("array_nums[%i] = %i\n", i , array_nums[i]);
        start++;
    }
    return 0;
}
