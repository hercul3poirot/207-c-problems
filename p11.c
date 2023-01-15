//11. Write a C program that accepts two item's weight (floating points' values) and the quantities of each to calculate the average value of the items.
#include <stdio.h>

void main() {
    float weightOne, weightTwo, average;
    int quanOne, quanTwo;
    printf("Weight - Item 1: ");
    scanf("%f", &weightOne);
    printf("Number of Item 1: ");
    scanf("%d", &quanOne);
    printf("Weight - Item 2: ");
    scanf("%f", &weightTwo);
    printf("Number of Item 2: ");
    scanf("%d", &quanTwo);
    average = (weightOne*quanOne+weightTwo*quanTwo)/(quanOne+quanTwo);
    printf("Average Value = %f", average);
}