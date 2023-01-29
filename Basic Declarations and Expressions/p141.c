//141. Write a C program that reads n digits (given) chosen from 0 to 9 and prints the number of combinations where the sum of the digits equals to another given number(s).
#include <stdio.h>
int hasDuplicates(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] == arr[j]) {
                return 0;
            }
        }
    }
    return 1;
}


int toThePowerOf(int number, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else if (exponent == 1) {
        return number;
    } else {
        return number * toThePowerOf(number, exponent - 1);
    }
}

int main() {
    int digits, sum, combs, start, stop, digitsum, num, numarr[100], count;
    printf("Input the amount of digits the number has:\n");
    scanf("%i", &digits);
    printf("\nSum of the digits:\n");
    scanf("%i", &sum);
    start = toThePowerOf(10, digits - 1);
    stop = toThePowerOf(10, digits);
    for (int i = start; i < stop; i++) {
        count = digits;
        digitsum = 0;
        num = i;
        while (num != 0) {
            digitsum += num % 10;
            numarr[count] = num % 10;
            count--;
            num -= num % 10;
            num /= 10;
        }
        if (digitsum == sum && hasDuplicates(numarr, digits) == 1) {
            combs++;
        }

    }
    printf("Number of combinations: %i", combs);
    return 0;
}
