//13. Write a C program that accepts three integers, and finds the maximum value of these three.
#include <stdio.h>

int main() {
    int numbers[4], biggestNum = NULL;
    for (int i = 0; i <= 2; i++){
        printf("Input integer %i: ", i+1);
        scanf("%i", &numbers[i]);
        if (biggestNum == NULL){
            biggestNum = numbers[i];
        } else {
            if (numbers[i] > biggestNum) {
                biggestNum = numbers[i];
            }
        }
    }
    printf("Maximum value of three integers: %i", biggestNum);
    return 0;
}