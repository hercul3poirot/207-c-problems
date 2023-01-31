//4. Write a C program that accepts two sequences of integers as input. Find all integers that appear in both sequences, one by one, in ascending order.
#include <stdio.h>
#define LENGTH 101

int main() {
    int seq1[LENGTH] = {0}, seq2[LENGTH] = {0}, temp;
    printf("Input the first sequence of numbers (numbers must be between 0 and 100, inclusive) (use CTRL + D to end):\n");
    while (scanf("%i", &temp) == 1) {
        seq1[temp]++;
    }
    printf("\nInput the second sequence of numbers (similar rules to above):\n");
    while (scanf("%i", &temp) == 1) {
        seq2[temp]++;
    }
    printf("The similar elements in each array are: ");
    for (int i = 0; i < LENGTH; i++) {
        if (seq1[i] > 0 && seq2[i] > 0) {
            printf("%i ", i);
        }
    }
}