//76. Write a C program to calculate and print the square and cubes of numbers 0-20, using tabs to replay them in a table of values.
#include <stdio.h>

int main() {
    printf("Number\tSquare\tCube\n");
    printf("|=======================|\n");
    for (int i = 0; i <= 20;i++){
        printf("|%i\t%i\t%i\t|\n",i,i*i,i*i*i);
    }
    printf("|=======================|\n");
    return 0;
}
