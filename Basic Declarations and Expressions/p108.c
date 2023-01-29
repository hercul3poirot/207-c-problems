//108. Write a C program that reads two integer values, and calculates the sum of all odd and even values between them.
#include <stdio.h>

int main(){
    int start, stop, esum, osum;
    esum = osum = 0;
    printf("Input the first integer number:\n");
    scanf("%i", &start);
    printf("Input the second integer number (greater than the first integer):\n");
    scanf("%i", &stop);
    for (int i = start; i <= stop; i++){
        if (i % 2 == 0){
            esum += i;
        } else {
            osum += i;
        }
    }
    printf("Sum of all odd values between %i and %i:\n%i", start, stop, osum);
    printf("\nSum of all even values between %i and %i:\n%i", start, stop, esum);
    return 0;
}
