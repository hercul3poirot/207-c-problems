//106. Write a C program that accepts 7 integer values and counts the even, odd, positive and negative values.
#include <stdio.h>

void main(){
    int posCount, negCount, evenCount, oddCount, temp;
    posCount = negCount = evenCount = oddCount = 0;
    printf("Input 7 integers:\n");
    for (int i = 0; i < 7; i++){
        scanf("%i", &temp);
        if (temp >= 0){
            posCount++;
        } else {
            negCount++;
        }
        if (temp % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("\nNumber of even values: %i", evenCount);
    printf("\nNumber of odd values: %i", oddCount);
    printf("\nNumber of positive numbers: %i", posCount);
    printf("\nNumber of negative numbers: %i", negCount);
}
