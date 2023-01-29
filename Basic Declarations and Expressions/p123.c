//123. Write a C program that reads two integers m, n, and computes the sum of n even numbers starting from m.
#include <stdio.h>

int main() { //While this can be done in the same way p122 is done, I wanted to try and do it with a for loop.
    int m, n, count, sum, temp;
    count = sum = 0;
    printf("Input two integers (m, n):\n");
    scanf("%i", &m);
    scanf("%i", &n);
    for (count = 0, m; count < n; m++) {
        if (m % 2 == 1) {
            sum += m;
            count++;
        }
    }
    printf("\nSum of %i odd numbers starting from %i:\n%i", n, m, sum);
    return 0;
}
