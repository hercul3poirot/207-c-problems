//77. Write a C program that accepts principal amount, rate of interest and days for a loan, calculating the simple interest for the loan, using the following formula:
//interest = principle * rate * days/365
#include <stdio.h>

void main(){
    int principle, days;
    float rate, interest;
    printf("Input loan amount: ");
    scanf("%i", &principle);
    printf("Input interest rate: ");
    scanf("%f", &rate);
    printf("Input term of the loan in days: ");
    scanf("%i", &days);
    interest = (float)principle * rate * days/365;
    printf("The interest amount is $%.2f", interest);
}