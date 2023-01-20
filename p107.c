//107. Write a C program that accepts an integer and prints the next ten consecutive odd and even numbers.
#include <stdio.h>

int main(){
    int num, oddCount, evenCount, oddStart, evenStart;
    oddCount = evenCount = 0;
    printf("Input an integer number:\n");
    scanf("%i", &num);
    oddStart = evenStart = num;
    printf("Next 10 consecutive odd numbers:\n");
    do {
        oddStart++;
        if (oddStart % 2 == 1){
            printf("%i, ", oddStart);
            oddCount += 1; 
        }
    } while (oddCount != 10);
    printf("\n\nNext 10 consecutive even numbers:\n");
    do {
        evenStart++;
        if (evenStart % 2 == 0){
            printf("%i, ", evenStart);
            evenCount += 1; 
        }
    } while (evenCount != 10);
    return 0;
}