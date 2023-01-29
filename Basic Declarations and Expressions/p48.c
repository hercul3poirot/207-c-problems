//48. Write a C program to read and print the elements of an array of length 7. Before printing, replace every negative number or 0 with 100.
#include <stdio.h>

int main() {
    int numbers[8];
    printf("Please input the 7 members of the array:\n");
    for (int i = 0; i <= 6; i++) {
        scanf("%i",&numbers[i]);
        //Assuming the original numbers need to be in the array at one point before printing.
        if (numbers[i] <= 0) {
            numbers[i] = 100;
        }
    }
    printf("\nArray values are:");
    for (int i = 0; i <= 6; i++) {
        printf("\nn[%i] = %i", i, numbers[i]);
    }
    return 0;
}
