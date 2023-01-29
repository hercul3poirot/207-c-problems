//7. Write a C program to display multiple variables.
#include <stdio.h>

int main() {
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    printf("The value of a + c is %d\n", a+c);
    printf("The value of x + c is %f\n", x+c);
    printf("The value of dx + x is %f\n", dx+x);
    printf("The value of int(dx) + ax is %ld\n", ((int)dx) + ax);
    printf("The value of a + x is %f\n", a+x);
    printf("The value of s + b is %i\n", s+b);
    printf("The value of ax + b is %ld\n", ax+b);
    printf("The value of s + c is %d\n", s+c);
    printf("The value of ax + c is %ld\n", ax+c);
    printf("The value of ax + ux is %lu\n", ax+ux);    
    return 0;
}
