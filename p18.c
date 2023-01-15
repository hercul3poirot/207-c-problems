//18. Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
#include <stdio.h>

void main() {
    int days, years, months;
    printf("Input days: ");
    scanf("%i", &days);
    while (days >= 365){
        years += 1;
        days -= 365;
    }
    while (days >= 30){
        months += 1;
        days -= 30;
    }
    printf("%i Years(s)\n%i Months(s)\n%i Days(s)", years, months, days);
}