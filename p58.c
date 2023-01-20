//58. Write a C program that accepts 4 real numbers from the keyboard, and prints out the biggest difference between them.
#include <stdio.h> 

int main() {
    float numbers[4], min = 1, max = 0, diff;
    printf("Input four numbers:\n");
    for (int i = 0; i <= 3; i++) {
        scanf("%f", &numbers[i]);
        if (min == 1) {
            min = numbers[i];
        } 
        else if (numbers[i] < min) {
            min = numbers[i];
        }
        if (max == 0) {
            max = numbers[i];
        } 
        else if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    diff = max - min;
    printf("Biggest difference is %.4f (4 decimal places)", diff);
    return 0;
}