//6. Write a C program to compute the perimeter and area of a circle with a given radius.
#include <stdio.h>
#include <math.h>

void main() {
    const float pi = 4.0 * atan(1.0);
    float radius;
    printf("What is the radius of your circle? ");
    scanf("%f", &radius);
    printf("Perimeter of the Circle = %.2f units\n", 2*pi*radius);
    printf("Area of the Circle = %.2f units²",pi*radius*radius);
}