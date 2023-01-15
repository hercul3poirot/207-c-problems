//70. Write a C program to print the alphabet set in decimal and character form.
#include <stdio.h>

void main() {
    for (int i = 65; i <= 90; i++) {
        printf("[%i-%c] ", i,i);
    }
    for (int i = 97; i <= 122; i++) {
        printf("[%i-%c] ", i,i);
    }
}