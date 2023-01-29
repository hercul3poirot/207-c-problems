//117. Write a C program that reads two integers and divides the first number by the second, printing the second of this division with two decimal points.
//Print "Division not possible!" if it is not possible.
#include <stdio.h>

int main() {
    int x, y;
    float result;
    printf("Input two number (integer values):\n");
    scanf("%i", &x);
    scanf("%i", &y);
    if (x == 0 || y == 0) {
        printf("Division not possible!");
    } else {
        result = x / y;
        printf("%.2f", result);
    }
    return 0;
}
