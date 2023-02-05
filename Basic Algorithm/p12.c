//12. Write a C program to find the larger value from two positive integer values that are in the range 20 to 30 inclusive.
//If neither of them are in range, return false.
#include <stdio.h>

int main() {
    int x, y;
    printf("Please input integers x and y separated by a space: ");
    scanf("%d %d", &x, &y);
    if ((x >= 20 && x <= 30) && (y >= 20 && y <= 30)) {
        x > y ? printf("%d (x) is the larger integer.", x) : printf("%d (y) is the larger integer.", y);
    } else {
        printf("One or both of the integers are not in range!");
    }
    return 0;
}
