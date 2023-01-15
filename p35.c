//35. Write a C program to check whether two numbers in a pair is in ascending order or descending order.
#include <stdio.h>

void main() {
    int x,y;
    printf("Input the first number of the pair: ");
    scanf("%i", &x);
    printf("Input the second number of the pair: ");
    scanf("%i", &y);
    if (x > y){
        printf("The pair is in descending order!");
    } else {
        printf("The pair is in ascending order!");
    }
}