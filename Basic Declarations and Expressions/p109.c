//109. Write a C program to find and print the square of each even and odd value between 1 and a given number n, where 4 < n < 101
#include <stdio.h>

int main() {
    int num;
    printf("Input a number(integer): ");
    scanf("%i", &num);
    printf("Square of each even number between 1 and %i", num);
    for (int i = 1; i <= num; i++){
        if (i % 2 == 0){
            printf("\n%i^%i = %i", i, i, i*i);
        }
    }
    printf("\n\nSquare of each odd number between 1 and %i", num);
    for (int i = 1; i <= num; i++){
        if (i % 2 == 1){
            printf("\n%i^%i = %i", i, i, i*i);
        }
    }
    return 0;
}
