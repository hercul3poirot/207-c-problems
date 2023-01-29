//Write a C program that accepts an integer from the user and divides all numbers between 1 and 100. Print the numbers which divide the integer and give a remainder of 3.
#include <stdio.h>

int main() {
    int num;
    printf("Input a number (integer):\n");
    scanf("%i", &num);
    printf("\nNumbers which give a remainder of 3 after being divided by the above integer:");
    for (int i = 1; i <= 100; i++) {
        if (i % num == 3){
            printf("\n%i",i);
        }
    }
    return 0;
}
