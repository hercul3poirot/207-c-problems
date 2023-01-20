//78. Write a C program to demonstrate the difference between predecrementing and postdecrementing using the decrement operator.
#include <stdio.h>

int main() {
    int x = 10;
    printf("Predecrementing:\n");
    printf("x   = %i\n", x);
    printf("x-- = %i\n", x--);
    printf("x   = %i\n\n", x);
    
    x = 10;
    printf("Postdecrementing:\n");
    printf("x   = %i\n", x);
    printf("--x = %i\n", --x);
    printf("x   = %i\n\n", x);
    return 0;
}