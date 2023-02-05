//15. Write a C program to count the number of two 5's are next to each other in an array of integers. Also count the situation where the second 5 is actually a 6.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numArr[] = {5, 5, 2, 5, 5}, length = sizeof(numArr)/sizeof(numArr[0]), count = 0;
    for (int i = 0; i < length; i++) {
        if ((numArr[i] == 5 && numArr[i + 1] == 5) || (numArr[i] == 5 && numArr[i + 1] == 6)) {
            count++;
        }
    }
    printf("Total amount of times that 5 is next to a 5, or a 5 is next to a 6 is %d", count);
    return 0;
}