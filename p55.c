//55. Write a C program that swaps two numbers without using a third variable.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, diff;
    printf("Input the value for x & y, seperated by a space: ");
    scanf("%i %i",&x,&y);
    printf("Values of x & y before swap: %i %i\n",x,y);
    diff = abs(x-y);
    if (x > y){
        x = x - diff;
        y = y + diff;
    } else {
        x = x + diff;
        y = y - diff;
    }
    printf("Values of x & y after swap: %i %i",x,y);
    return 0;
}