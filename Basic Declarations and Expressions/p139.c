//139. Write a C program to find the maximum sum of a contiguous subsequence from a given sequence of numbers. 
#include <stdio.h>

int main() {
    int length, sequence[5000], sum = 0, max;
    printf("Input number of terms in the sequence:\n");
    scanf("%i", &length);
    printf("\nInput the terms of the said sequence:\n");
    for (int i = 0; i < length; i++) {
        scanf("%i", &sequence[i]);
    }
    max = sequence[0];
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            sum += sequence[j];
            if (sum > max) {
                max = sum;
            }
        }
        sum = 0; //Resets for next contiguous subsequence.
    }
    printf("\nMaximum sum of a contingous subsequence:\n%i", max);
    return 0;
}
