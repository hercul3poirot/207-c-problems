//31. Write a C program to compute the sum of the three given integers. However, if any of the values is in the range 10..20 inclusive then that value counts as 0, except 13 and 17.
#include <stdio.h>

int main() {
    int temp, sum = 0;
    printf("Please enter integers x, y and z (one per line)\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &temp);
        if ((temp >= 10 && temp <= 20) && temp != 13 && temp != 17) {
            sum += 0;
        } else {
            sum += temp;
        }
    }
    printf("The sum is %d", sum);
}