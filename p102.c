//102. Write a C program that reads three integers and sort the numbers in ascending order. Print the original numbers and sorted numbers.
#include <stdio.h>

void main() {
    int arr[3];
    printf("Input 3 numbers, separated by a space:\n");
    for (int i = 0; i < 3; i++){
        scanf("%i", &arr[i]);
    }
    printf("\n-------------------------------------");
    printf("\nOriginal numbers: ");
    for (int i = 0; i < 3; i++){
        printf("%i", arr[i]);
    }
    int start_position = 0;
    int end_position = 3;
    int temp;
    for (int i = 1; i < 3; i++) {
        while (start_position != end_position){
            if (arr[start_position] > arr[start_position + 1]) {
                temp = arr[start_position + 1];
                arr[start_position + 1] = arr[start_position];
                arr[start_position] = temp; 
            }
            start_position++;    
        } 
        end_position--;
        start_position = 0;
    }
    printf("\nSorted numbers: ");
    for (int i = 0; i < 3; i++){
        printf("%i", arr[i]);
    }
}