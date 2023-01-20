//17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include <stdio.h>

int main() {
    int seconds, hours, minutes;
    printf("Input seconds: ");
    scanf("%i", &seconds);
    while (seconds >= 3600){
        hours += 1;
        seconds -= 3600;
    }
    while (seconds >= 60){
        minutes += 1;
        seconds -= 60;
    }
    printf("There are:\nH:M:S - %i:%i:%i", hours, minutes, seconds);
    return 0;
}