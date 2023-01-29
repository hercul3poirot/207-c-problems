//1. Write a C program that takes n number of positive integers. Find the integer that appears the least number of times among the said integers. 
//If there are multiple such integers, select the smallest one.
#include <stdio.h>

int main() {
    int numbers[1000], length, num, minval = 1000, dupecount, iteration, smallest = 1000;
    iteration = dupecount = 0;
    for (int i = 0; i < minval; i++) {
        numbers[i] = 0;
    }
    printf("How many integers do you wish to input? ");
    scanf("%d", &length);
    printf("Please input the integers, one on each line:\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &num);
        numbers[num]++;
    }
    for (int i = 0; i < 1001; i++) { //Finds which number appears the least.
        if (numbers[i] < numbers[minval] && numbers[i] > 0) {
            minval = i;
        }
    }
    for (int i = 0; i < 1001; i++) { //Finds if there are multiple numbers which occur 'the least'
        if (numbers[i] == numbers[minval]) {
            dupecount++;
        }
    }
    for (;;) {
        if (numbers[iteration] > 0) { //Finds the first non 0 element in the array (the smallest number).
            smallest = iteration;
            break;
        }
        iteration++;
    }
    if (dupecount > 1) {
        printf("Because there are multiple values that occur equal amounts of times:\n");
        printf("Smallest value is %i", smallest);
    } else {
        printf("The term that appears the least amount of times is: %i", minval);
    }
    return 0;
}
