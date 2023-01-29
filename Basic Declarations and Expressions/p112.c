//112. Write a C program that reads seven integer values from the user, and finds the highest value and it's position.
#include <stdio.h>

int main() {
    int max, temp, position;
    printf("Input 6 numbers (integer values):\n");
    for (int i = 1; i <= 6; i++) {
        scanf("%i", &temp);
        if (temp >= max){
            max = temp;
            position = i;
        }
    }
    printf("\nMaximum value: %i\nPosition: %i", max, position);
    return 0;
}
