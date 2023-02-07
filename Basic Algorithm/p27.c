//27. Write a C program to find the larger from two given integers. 
//However if the two integers have the same remainder when divided by 5, then the return the smaller integer. 
//If the two integers are the same, return 0.
#include <stdio.h>

int test() {
    int x, y;
    printf("Please input integers x and y, separated by a comma: ");
    scanf("%d, %d", &x, &y);
    if (x == y) {
        return 0;
    } else { 
        if (x > y) {
            printf("%d (x) is the larger integer.", x); 
            return y;
        } else {
            printf("%d (y) is the larger integer.", y);
            return x;
        }
    }
}

//Driver:
int main() {
    printf("\n%i", test());
    return 0;
}
