//30. Write a C program to compute the sum of the three integers. If one of the values is 13 then do not count it towards the sum.
#include <stdio.h>

int main() {
    int temp, sum = 0;
    printf("Please enter integers x, y and z (one per line)\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &temp);
        if (temp != 13) {
            sum += temp;
        }
    }
    printf("The sum is %d", sum);
}