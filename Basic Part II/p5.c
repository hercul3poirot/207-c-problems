//5. Write a C program that accepts a sequnce of different values, calculating the sums of the values before and after the maximum value's position.
//For clarification, an input of 1 2 9 4 5 returns 3 9 (1 + 2 = 3 and 4 + 5 = 9)
#include <stdio.h>

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
    int mainList[100], sortList[100], length, sumB, sumA, count, temp, max, maxFound;
    sumB = sumA = count = maxFound = 0;
    printf("Please input a sequence of integers (one per line) (use CTRL + D to end):\n");
    while (scanf("%i", &temp) == 1) {
        mainList[count] = temp;
        sortList[count] = temp;
        count++;
    }
    bubbleSort(sortList, count);
    max = sortList[count - 1];
    for (int i = 0; i < count; i++) {
        if (mainList[i] == max && maxFound == 0) {
            maxFound = 1;
            continue;
        } else if (maxFound == 1) {
            sumA += mainList[i];
        } else if (maxFound == 0) {
            sumB += mainList[i];
        }
    }
    printf("\nThe sum of the integers before max is %i, while the sum of the integers after max is %i.", sumB, sumA);
    return 0;
}