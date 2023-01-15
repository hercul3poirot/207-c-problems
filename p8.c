//8. Write a C program to convert specified days into years, weeks and days. Note: Ignore the leap year (or add it for a bit of a challenge!)
#include <stdio.h>
#include <math.h>

void main() {
    float numberofdays, years, weeks, days;
    int realyears, realweeks, realdays;
    printf("Number of days: ");
    scanf("%f", &numberofdays);
    years = numberofdays/365;
    weeks = (years-(int)years)*52;
    days = (weeks-(int)weeks)*7;
    realyears = floor(years);
    realweeks = floor(weeks);
    realdays = ceil(days);
    printf("Years: %i\nWeeks: %i\nDays: %i", realyears, realweeks, realdays);
}