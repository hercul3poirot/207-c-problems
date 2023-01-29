//9. Write a C program that accepts two integers from the user and calculates the product of the two integers.
#include <stdio.h>

int main() {
    int one, two;
    printf("Input the first integer: ");
    scanf("%i", &one);
    printf("Input the second integer: ");
    scanf("%i", &two);
    printf("Product of the above two integers: %i", one * two);    
    return 0;
}
