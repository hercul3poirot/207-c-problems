//113. Write a C program to create and print the sequence of the following example.
#include <stdio.h>

int main() {
    int b = 100;
    for (int a = 1; a <= 51; a += 5) {
        printf("a=%i\tb=%i\n", a, b);
        b -= 10;
    }
    return 0;
}
