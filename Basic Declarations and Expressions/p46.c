//46. Write a C program to calculate the value of S, where S = 1 + 3/2 + 5/4 + 7/8
#include <stdio.h>

int main(){
    float sum;
    sum = (float)1 + (float)3/(float)2 + (float)5/(float)4 + (float)7/(float)8;
    //This is like the dumbest way to do it but I have a party I gotta set up, come back and change this!!!! ^^^^^^^
    printf("Value of series: %f", sum);
    return 0;
}
