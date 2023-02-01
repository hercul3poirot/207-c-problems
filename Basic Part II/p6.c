//6. Write a C program that accepts a sequence of positive integers from the user, and finds the lenght of the longest continuous subsequence from the said sequence.
#include <stdio.h>

int main() {
    int sequence[100] = {0}, inputLength, startPos, endPos, increment = 1;
    printf("Length of the sequence: ");
    scanf("%i", &inputLength);
    printf("Input the %i members of the main sequence (positive integers only):\n", inputLength);
    for (int i = 0; i < inputLength; i++) {
        scanf("%i", &sequence[i]);
    }
    for (int i = 0; i < inputLength; i++) {
        if (sequence[i + increment] > sequence[i]) {
            startPos = i;
            while (sequence[i + increment] > sequence[i]) {
                endPos = i + increment;
                increment++;
            }
            i += increment;
        }
    }
    printf("Length of longest ascending contiguous subsequence: %i [", (endPos - startPos) + 1);
    for (int i = startPos; i <= endPos; i++) {
        if (i == endPos) {
            printf("%i]", sequence[i]);
        } else {
            printf("%i ", sequence[i]);
        }
    }
    
    return 0;
}