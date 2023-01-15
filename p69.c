//69. Write a C program to print a binomial coefficiant table.
#include <math.h>
#include <stdio.h>

int factorial(int num){
    if (num == 0) {
        return 1;
    } else {
        return num * factorial(num-1);
    }
}

void main() {
    int combination;
    for (int i = 0; i <= 10; i++) {
        printf("%i ",i);
        for (int j = 0; j <= i; j++) {
            combination = factorial(i)/(factorial(i-j)*factorial(j));
            printf("%i ", combination);
        }
        printf("\n");
    }
}