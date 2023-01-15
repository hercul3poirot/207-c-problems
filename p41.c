//41. Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.
#include <stdio.h>

void main() {
    int n;
    printf("Input number of lines: ");
    scanf("%i", &n);
    for (int i = 1; i <= n*3 ; i += 3) {
        printf("%i %i %i\n",i,i+1,i+2);
    }
}