//33. Write a C program that accepts some integers from the user, and finds the highest value and its position.
#include <stdio.h>

int main() {
    int numbers[6], maxNum = NULL, position;
    printf("Input 5 integers:\n");
    for (int i = 0; i < 5; i++){
        scanf("%i", &numbers[i]);
        if (maxNum == NULL) {
            maxNum = numbers[i];
            position = i + 1;
        } 
        else if (numbers[i] > maxNum) {
            maxNum = numbers[i];
            position = i + 1;
        }
    }
    printf("Highest value: %i\nPosition: %i", maxNum, position);
    return 0;
}