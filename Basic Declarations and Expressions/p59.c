//59. Write a C program to display the sum of the series 1 + 1/2 + 1/3 + ... + 1/n.
#include <stdio.h> 

int main() {
    float sum = 0, add;
    int n;
    printf("Input any number: ");
    scanf("%i",&n);
    if (n <= 0) {
        printf("Sorry, 1/0 is undefined, and the sum does not account for negative fractions, and so the sum will not work!");
    } else {
        for (int i = 1; i <= n; i++) {
            add = (float)1/i;
            sum += add;
        }
        printf("Sum = %f", sum);
    }
    return 0;
}
