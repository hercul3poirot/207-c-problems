//114. Write a C program that accepts two integer values and calculate the sum of all even values between them, exclusive input values.
#include <stdio.h>

int main() {
    int x, y, swaptemp, sum = 0;
    printf("Input two number (integer values):\n");
    scanf("%i", &x);
    scanf("%i", &y);
    if (x > y){
        swaptemp = y;
        y = x;
        x = swaptemp;
    }
    for (int i = x; i <= y; i++) {
        if (i % 7 != 0){
            sum += i;
        }
    }
    printf("\nSum of all even values between %i and %i:\n%i", x, y, sum);
    return 0;
}
