//146. Write a C program to extract words of 3 to 6 characters length from a given sentence not more than 1024 characters. 
#include <stdio.h>

int isASCIILetter(char c) {
    if (c < 65 || c > 90) {
        if (c < 97 || c > 122) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char words[348][6], c, tempword[1024];
    int lettercount, wordcount;
    lettercount = wordcount = 0;
    printf("English sentences consisting of delimiters and alphanumeric characters on one line:");
    for (;;) {
        c = getchar();
        if (c == EOF) {
            break;
        }
        do {
            tempword[lettercount] = c;
            lettercount++;
        } while (isASCIILetter(c) == 0)
        if (lettercount > 1 && lettercount < 6) {
            for (int i = 0)
        }
    }
    return 0;
}

