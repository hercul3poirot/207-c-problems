//116. Write a C program that accepts a pair of numbers from the user and prints "Ascending order if the two numbers are in ascending order, otherwise printing "Descending order".
#include <stdio.h>

int main() {
    int x, y;
    printf("Input two number (integer values):\n");
    scanf("%i", &x);
    scanf("%i", &y);
    if (x < y) {
        printf("Ascending order");
    } else if (x > y) {
        printf("Descending order");
    } else {
        printf("Equal");
    }
    return 0;
}