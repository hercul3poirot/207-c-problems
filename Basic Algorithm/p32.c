//32. Write a C program to check two given integers and return the value whichever value is nearest to 13 without going over. Return 0 if both numbers go over.
#include <stdio.h>

int test() {
    int x, y;
    printf("Please input integers x and y, separated by a comma: ");
    scanf("%d, %d", &x, &y);
    if (x >= 13 && y >= 13) {
        return 0;
    }
    else if (x >= 13) {
        return y;
    }
    else if (y >= 13) {
        return x;
    }
    return x > y ? x : y; //Now we know both are less than 13 we can check which one is bigger (closer to 13)
}

//Driver:
int main() {
    printf("%d", test());
    return 0;
}