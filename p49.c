//49. Write a C program to read and print the elements of an array of length 7. Before printing, put the triple of the previous position starting from the second position of the array.
//Translation: Let the user input the first element of the array, the following elements are triples of the previous.
#include <stdio.h>

int main() {
    int firstNum, numbers[8];
    printf("Input the first number of the array: ");
    scanf("%i", &firstNum);
    for (int i = 0; i <= 6; i++) {
        if (i == 0) {
            numbers[i] = firstNum;
        } else {
            numbers[i] = numbers[i-1] * 3;
        }
        printf("n[%i] = %i\n", i, numbers[i]);
    }
    return 0;
}