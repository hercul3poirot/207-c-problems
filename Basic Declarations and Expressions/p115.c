//115. Write a C program that accepts a pair of numbers from the user, and prints the sequence from the lowest to highest number.
//The program must also calculate and display the average of the numbers.
#include <stdio.h>

int main() {
    int x, y, count, sum, swaptemp;
    float average;
    count = sum = 0;
    printf("Input two number (integer values):\n");
    scanf("%i", &x);
    scanf("%i", &y);
    if (x > y){
        swaptemp = y;
        y = x;
        x = swaptemp;
    }
    printf("\nSequence from the lowest to highest number:\n");
    for (int i = x; i <= y; i++) {
        printf("%i ", i);
        sum += i;
        count++;
    }
    average = (float)sum/count;
    printf("\nAverage value of the said sequence:\n%.2f", average);
    return 0;
}
