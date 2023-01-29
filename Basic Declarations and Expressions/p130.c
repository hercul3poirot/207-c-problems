//130. Write a C program to create an array of length and fill the array elements with integer value.
//Find the smallest value and it's position within the array.
#include <stdio.h>
#define LENGTH 10


int main() {
    int array_nums[LENGTH], smallest, min, position;
    printf("Input %i nums:\n", LENGTH);
    scanf("%i", &array_nums[0]);
    min = array_nums[0];
    for (int i = 1; i < LENGTH; i++) {
        scanf("%i", &array_nums[i]);
        if (array_nums[i] < min) {
            smallest = array_nums[i];
            position = i;
        }
    }
    printf("The smallest element is array_nums[%i], having a value of %i.", position, smallest);
    return 0;
}
