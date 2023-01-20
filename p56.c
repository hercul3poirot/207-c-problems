//56. Write a C program to shift given data by two bits to the left.
#include <stdio.h>

int main() {
    int value;
    printf("Input value: ");
    scanf("%i", &value);
    printf("Integer value: %i\n", value);
    value <<= 2;
    printf("The left shifted data is = %i", value);
    return 0;
}