//24. Write a C program that reads two integers and checks whether they are multiplied or not. 
//EXPLANATION OF THE ABOVE: Check if one is a multiple of the other.
#include <stdio.h>

int main() {
    int x,y;
    printf("Enter the first number: ");
    scanf("%i", &x);
    printf("Enter the second number: ");
    scanf("%i", &y);
    if (((x % y) == 0) || ((y % x) == 0)){
        printf("Multiplied!");
    } else {
        printf("Not Multiplied :(");
    }
    return 0;
}
