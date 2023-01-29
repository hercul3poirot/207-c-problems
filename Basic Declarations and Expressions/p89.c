//89. Write a C program to calculate (x+y+z) for each pair of integers x, y and z.
#include <stdio.h>

int main() {
    int x,y,z;
    printf("Please enter 'x,y,z' in this form: ");
    scanf("%lld,%lld,%lld",&x,&y,&z);
    printf("Result: %lld", x+y+z);
    return 0;
}
