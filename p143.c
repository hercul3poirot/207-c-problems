//Write a C program to find the difference between the largest integer and the smallest integer, which are created by 8 numbers from 0 to 9.
//The number that can be rearranged shall start with 0 as in 00135668.
#include <stdio.h>
int toThePowerOf(int number, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else if (exponent == 1) {
        return number;
    } else {
        return number * toThePowerOf(number, exponent - 1);
    }
}

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int num, numarr[8], bigint, bigarr[8], smallint, difference, addamount;
    printf("Input an integer created by 8 numbers (0 to 9):\n");
    scanf("%i", &num);
    int count = 0;
    while (num != 0) {
        numarr[count] = num % 10;
        num -= num % 10;
        num /= 10;
        count++;
    }
    bubbleSort(numarr, 8);
    for (int i = 0; i < 8; i++) {
        smallint += (toThePowerOf(10, 7-i) * numarr[i]);
        bigarr[7-i] = numarr[i];
    }
    for (int i = 0; i < 8; i++) {
        bigint += (toThePowerOf(10, 7-i) * bigarr[i]);
    }
    printf("The difference between the largest integer and the smallest integer.\n");
    difference = bigint - smallint;
    printf("%i - %i = %i", bigint, smallint, difference);
    return 0;
}