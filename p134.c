//134. Write a C program to check whether three given lengths (integers) of three sides of a triangle form a right angled triangle or not.
//Print "Yes" if the given sides form a right angled triangle, otherwise print "No".
#include <stdio.h>

int main() {
    int x, y, z, swapTemp;
    printf("Input the three sides of a triangle:\n");
    scanf("%i\n%i\n%i", &x, &y, &z);
    if ((x*x) + (y*y) == (z*z) || (z*z) + (y*y) == (x*x) || (z*z) + (x*x) == (y*y)) {
        printf("It is a right angled triangle!");
    } else {
        printf("It is not a right angled triangle!");
    }
}