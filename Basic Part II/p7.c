//7. Write a C program that accepts three integers A, B, C. Out of the integers between A and B (inclusive), find the smallest absolute value of difference from C.
#include <stdio.h>
#include <stdlib.h>

int main() {    
    int A, B, C, minDiff, diff, minDiffNum;
    printf("Please input integers A, B in the exact same format: ");
    scanf("%i, %i", &A, &B);
    printf("Please input integer C: ");
    scanf("%i", &C);
    minDiff = abs(C - A) * 100; //Arbitrary value which is much bigger than the min difference.
    for (int i = A; i <= B; i++) {
        diff = abs(C - i);
        if (diff < minDiff) {
            minDiff = diff;
            minDiffNum = i;
        }

    }
    printf("Smallest absolute value of difference between C and integers between A and B (inclusive): %i", minDiff);
    printf("\nThis is the absolute difference between %i and %i.", C, minDiffNum);
    return 0;
}

//Note: This can also be done by checking where C is in relation to A and B (checking if C > A and C < B, etc.)