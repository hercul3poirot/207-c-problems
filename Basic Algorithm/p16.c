//16. Write a C program to check if a triple is presents in an array of integers or not. If a value appears three times in a row in an array it is called a triple.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numArr[] = {5, 5, 5, 4, 5, 6, 6, 6}, length = sizeof(numArr)/sizeof(numArr[0]), count = 0;
    for (int i = 0; i < length; i++) {
        if (numArr[i] == numArr[i + 1] && numArr[i] == numArr[i + 2]) {
            count++;
        }
    }
    printf("Total amount of times that a triple occurs is %d", count);
    return 0;
    
}
