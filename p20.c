//20. Write a C program to print the roots of Bhaskara's formula from the given three floating numbers. Display a message if it is not possible to find the roots.
#include <stdio.h>
#include <math.h>

void main() {
    float a,b,c, discriminant, root1, root2;
    printf("Input the first number(a): ");
    scanf("%f", &a);
    printf("Input the second number(b): ");
    scanf("%f", &b);
    printf("Input the third number(c): ");
    scanf("%f", &c);
    discriminant = b*b - 4*a*c;
    if (discriminant < 0) {
        printf("The roots are complex, and thus, cannot be found.");
    } else {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("For the quadratic equation %.2fx²+%.2fx+%.2f=0:\nRoot 1: %.2f\nRoot 2: %.2f",a,b,c,root1,root2);
    }
}