//97. Write a C program to replace more than one blanks with a single blank in an input string
#include <stdio.h>

void main() {
    int charCount, wordCount, ch;
    charCount = wordCount = 0;
    printf("Input a string and get the number of characters and words: \n");
    while ((ch = getchar()) != EOF) {
        if (charCount == 0 && ch != '\n'){
            wordCount += 1;
        }
        charCount++;
        if (ch == ' ') {
            wordCount += 1;
        }
    }
    printf("Number of characters: %i\n", charCount);
    printf("Number of words: %i", wordCount);
}