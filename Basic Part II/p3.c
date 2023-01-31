//3. Write a C program that accepts three integers from the user, and finds the second largest number among these.
//Reworked - works for a 'n' amount of integers from the user.
#include <stdio.h>
#define LENGTH 10

void bubbleSort(int arr[], int length){
    int temp;
    for (int i = 0; i < length - 1; i++) { //Accessing each element
        for (int j = 0; j < length - i - 1; j++) { // Last i elements are already in place, which is why we use 'length - i - 1'
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[LENGTH];
    printf("Enter %i integers, one per line:\n", LENGTH);
    for (int i = 0; i < LENGTH; i++) {
        scanf("%i", &numbers[i]);
    }
    bubbleSort(numbers, LENGTH);
    printf("\nThe second largest number among these three is %i.", numbers[1]);
    return 0;
}