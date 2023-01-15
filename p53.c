//53. Write a C program that accepts the: principle amount, rate of interest and time. It should then calculate the simple interest gained on this initial deposit.
#include <stdio.h> 

void main() {
    float principle, roi, time;
    double simpleInterest;
    printf("Enter the principle, rate of interest and time seperated by commas: ");
    scanf("%f,%f,%f",&principle, &roi, &time);
    simpleInterest = 0.01 * roi * principle * time;
    printf("Simple interest = $%.2f",simpleInterest);
}