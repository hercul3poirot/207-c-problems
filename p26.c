//26. Write a C program that prints all even numbers between 1 and 50 (inclusive)
#include <stdio.h>

void main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%i ",i);
        }
    }
}