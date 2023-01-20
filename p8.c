//8. Write a C program to convert specified days into years, weeks and days. Note: Ignore the leap year (or add it for a bit of a challenge!)
#include <stdio.h>
#include <math.h>

int main() {
    float numberofdays, years, weeks, days;
    int realyears, realweeks, realdays;
    printf("Number of days: ");
    scanf("%f", &numberofdays);
    years = numberofdays/365;
    weeks = (years-(int)years)*52;
    days = (weeks-(int)weeks)*7;
    realyears = floor(years);
    realweeks = floor(weeks);
    realdays = floor(days);
    printf("Years: %i\nWeeks: %i\nDays: %i", years, weeks,days);
    return 0;
}