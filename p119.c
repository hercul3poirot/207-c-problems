//119. Write a C program to calculate the sum of all numbers between two given numbers (inclusive) which are not divisible by 7.
#include <stdio.h>

int main() {
    int x, y, swaptemp, sum = 0;
    printf("Input two number (integer values):\n");
    scanf("%i", &x);
    scanf("%i", &y);
    if (x > y){
        swaptemp = y;
        y = x;
        x = swaptemp;
    }
    for (int i = x; i <= y; i++) {
        if (i % 7 != 0){
            sum += i;
        }
    }
    printf("\nSum of all numbers between said numbers (inclusive) not divisible by 7:\n%i", sum);
    return 0;
}