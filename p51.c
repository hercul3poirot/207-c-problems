//51. Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Pring the elements of the modified array.
#include <stdio.h>

void main() {
    int array_n[6], swapTemp;
    printf("Input the 6 members of the array:\n");
    for (int i = 0; i <= 5; i++) {
        scanf("%i", &array_n[i]);
    }
    for (int i = 0; i < 3; i++) {
        swapTemp = array_n[5-i];
        array_n[5-i] = array_n[i];
        array_n[i] = swapTemp;
    }
    for (int i = 0; i <= 5; i++) {
        printf("\narray_n[%i] = %i", i, array_n[i]);
    }
}