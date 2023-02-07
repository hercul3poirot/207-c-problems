//Write a C program to check whether two or more non-negative given integers have the same right-most digit.
#include <stdio.h>

int test(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        if (arr[i] % 10 != arr[i + 1] % 10) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numbers[100] = {-1}, length;
    printf("How many integers are to be checked?: ");
    scanf("%d", &length);
    printf("Please input the integers (one per line):\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &numbers[i]);
    }
    if (test(numbers, length) == 1) {
        printf("All integers have the same right-most digit.");
    } else {
        printf("All integers do not have the same right-most digit.");
    }
    return 0;
}