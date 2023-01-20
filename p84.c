//84. Write a C program to calcualte and print the average of some integers. Accept all the values preceding 888.
#include <stdio.h>

int main() {
    int sum = 0, count = 0, flag = 0, tempNum;
    float average;
    while (flag == 0) {
        printf("Enter a number (888 or higher to terminate): ");
        scanf("%i", &tempNum);
        if (tempNum < 888) {
            count += 1;
            sum += tempNum;
        } else {
            break;
        }
    }
    if (count != 0) {
        average = sum/count;
        printf("The average of the said numbers is %f", average);
    }
    else {
        printf("Not possible, as count is 0 and anything/0 is undefined!");
    }
    return 0;
}