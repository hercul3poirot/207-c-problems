//147. Write a C program to find the number of combinations that satisfy p + q + r + s = n, where n is a given number <= 4000 and p, q, r, s is in the range of 0 to 1000.
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Input a positive integer:\n");
    scanf("%i", &n);
    for (int p = 0; p <= n; p++) {
        printf("p is now %i\n", p);
        for (int q = 0; q <= n; q++) {
            printf("q is now %i\n", q);
            for (int r = 0; r <= n; r++) {
                printf("r is now %i\n", r);
                for (int s = 0; s <= n; s++) {
                    printf("s is now %i\n", s);
                    if (p + q + r + s == n) {
                        count++;
                        printf("Count is now %i", count);
                    }
                }
            }       
        }
    }
    printf("\nNumber of combinations of p,q,r,s:\n%i", count);
    return 0;
}
