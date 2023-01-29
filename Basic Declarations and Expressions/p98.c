//98. Write a C program which accepts some text from the user and prints each word of that text in a seperate line.
#include <stdio.h>
#include <string.h>
#define MAX 1000

int main() {
    int ch;
    int length;
    printf("Input some text:\n");
    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            printf("\n");
        } else {
            printf("%c", ch);
        }
    }
    return 0;
}
