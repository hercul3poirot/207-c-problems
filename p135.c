//135. Write a C program which reads an integer n, and finds the number of a, b, c and d (0 <= a, b, c, d <= 9)
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Input a number:\n");
    scanf("%i", &n);
    printf("\na + b + c + d = n");
    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                for (int d = 0; d <= 9; d++) {
                    if (a + b + c + d == n) {
                        printf("\n%i, %i, %i, %i", a, b, c, d);
                        count++;
                    } 
                }
            }
        }
    }
    printf("\n\nTotal number of combinations:\n%i", count);
    return 0;
}