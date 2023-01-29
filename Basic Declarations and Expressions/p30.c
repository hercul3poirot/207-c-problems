//30. Write a C program to find and print the square of each even number, ranging from 1 to a specified value.
#include <stdio.h>

int main() {
    int endNumber;
    printf("Create a list of all even squares from 1 to: ");
    scanf("%i", &endNumber);
    for (int i = 1; i <= endNumber; i++) {
        if ((i % 2 == 0)) {
            printf("%i^%i = %i\n", i,i, i*i);
        }   //Come back and fix whitespace error here ^^
    }
    return 0;
}
