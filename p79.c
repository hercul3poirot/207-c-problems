//79. Write a C program using looping to produce the following table of values.
#include <stdio.h>
#include <math.h>

void main() {
    printf("x\tx+2\tx+4\tx+6\n");
    printf("----------------------------");
    for (int i = 1; i <= 5*3; i +=3) {
        printf("\n%i\t%i\t%i\t%i",i,i+2,i+4,i+6);
    }
}