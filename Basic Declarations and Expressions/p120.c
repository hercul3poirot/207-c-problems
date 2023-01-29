//120. Write a C program to print a squence from 1 to a given (integer) number, insert a comma between these numbers (with no comma after the last character!)
#include <stdio.h>

int main() {
    int lim;
    printf("Input a number(integer):\n");
    scanf("%i", &lim);
    for (int i = 1; i <= lim; i++) {
        if (i != lim) {
            printf("%i,", i);
        } else {
            printf("%i", i);
        }
    }
    return 0;
}
