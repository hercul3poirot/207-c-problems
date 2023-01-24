//132. Write a C program to find heights of the top three buildings in descending order from eight given buildings.
#include <stdio.h>
#define LENGTH 8

void bubbleSort(int arr[], int length){
    int start_position = 0, end_position = length, temp;
    for (int i = 1; i < length; i++) {
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
}

int main() {
    int heights[LENGTH];
    printf("Input LENGTH heights of buildings:\n");
    for (int i = 0; i < LENGTH; i++){
        scanf("%i", &heights[i]);
    }
    bubbleSort(heights, LENGTH);
    printf("\nHeights of the top three buildings:");
    for (int i = LENGTH; i > LENGTH - 3 ; i--){
        printf("\n%i", heights[i]);
    }
    return 0;
}