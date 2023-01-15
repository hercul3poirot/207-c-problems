//96. Write a C program to count blanks, tabs, and newlines in an input text.
#include <stdio.h>

void main() {
    int blankCount, tabCount, newlineCount, ch;
    blankCount = tabCount = newlineCount = 0;
    printf("Input a string and get the number of characters and words: \n");
    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            blankCount += 1;
        }
        if (ch == '\t') {
            tabCount += 1;
        }
        if (ch == '\n') {
            newlineCount += 1;
        }
    }
    printf("\nNumber of blanks: %i", blankCount);
    printf("\nNumber of tabs: %i", tabCount);
    printf("\nNumber of newlines: %i", newlineCount);
}