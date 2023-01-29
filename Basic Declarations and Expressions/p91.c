//91. Write a C program to find the angle between the hour hand and the minute hand of a clock.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float pi = 4 * atan(45), hourAngle, minuteAngle, difference;
    int hours, minutes;
    printf("Input hours(h) and minutes(m) separated by a space: ");
    scanf("%i %i", &hours, &minutes);
    hourAngle = hours * 30;
    minuteAngle = minutes * 6;
    difference = abs(hourAngle-minuteAngle);
    if (difference > 180){
        difference = 360 - difference;
    }
    printf("The angle is %.2f at %i:%i", difference, hours, minutes);
    return 0;
}
