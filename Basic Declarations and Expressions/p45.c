//Write a C program to calculate the values of S, where S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/50.
#include <stdio.h>

int main(){
    float sum = 0, addvalue;
    for (int i = 1; i <= 50; i++){
        addvalue = (float)1/i;
        sum += addvalue;
    }
    printf("Value of S: %.2f", sum);
    return 0;
}
