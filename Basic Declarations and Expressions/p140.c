//140. Write a C program which reads a sequence of integers, and finds the element which occurs most frequently.
#include <stdio.h>
#define LENGTH 100

int isInTwoDimArr(int arr[][LENGTH], int length, int item) {
    for (int i = 0; i < length; i++) {
        if (arr[i][0] == item) {
            return 0;
        }
    }
    return 1;
}

int whereInTwoDimArr(int arr[][LENGTH], int length, int item) {
    for (int i = 0; i < length; i++) {
        if (arr[i][0] == item) {
            return i;
        }
    }
    return -1; //Chose this as flag as this position is impossible.
}

int main() {
    int numbers[LENGTH][LENGTH], temp, count = 0, position, max;
    printf("Input the terms of the sequence (max 100):\n");
    while (scanf("%i", &temp) != EOF) {
        if (isInTwoDimArr(numbers, 100, temp) == 1) {
            numbers[count][0] = temp;
            numbers[count][1] = 1;
            count++;
            position = whereInTwoDimArr(numbers, LENGTH, temp);
        } else {
            position = whereInTwoDimArr(numbers, LENGTH, temp);
            numbers[position][1]++;
        }
    }
    max = numbers[0][1];
    for (int i = 0; i <= count; i++) {
        if (numbers[i][1] > max) {
            max = numbers[i][0];
        }
    }
    printf("The most occuring element in the given sequence is %i", max);
    return 0;
}
