//122. Write a C program that reads two integers m, n and computes the sum of n even numbers starting from m.
#include <stdio.h>

int main() {
    int m, n, count, sum, var;
    count = sum = 0;
    printf("Input two integers (m, n):\n");
    scanf("%i", &m);
    scanf("%i", &n);
    if (m % 2 == 0) {
        var = m;
    } else {
        var = m + 1;
    }
    while (count != n) {
        sum += var;
        var += 2;
        count += 1;
    }
    printf("\nSum of %i even numbers starting from %i:\n%i", n, m, sum);
    return 0;
}
