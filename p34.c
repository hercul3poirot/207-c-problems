//Write a C program to compute the sum of all the odd numbers between a given pair of integers.
#include <stdio.h>

void main() {
    int x,y, temp, sum = 0;
    printf("Input the first number of the pair: ");
    scanf("%i", &x);
    printf("Input the second number of the pair: ");
    scanf("%i", &y);
    if (x > y){
        temp = y;
        y = x;
        x = temp;
    }
    printf("List of odd numbers: \n");
    for (int i = x; i < y; i++) {
        if (i % 2 == 1) {
            sum += i;
            printf("%i\n", i);
        }
    } 
    printf("Sum = %i", sum);
}