//46. Write a C program to calculate the value of S, where S = 1 + 3/2 + 5/4 + 7/8
#include <stdio.h>

void main(){
    float sum;
    sum = (float)1 + (float)3/(float)2 + (float)5/(float)4 + (float)7/(float)8;
    printf("Value of series: %f", sum);
}