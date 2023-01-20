//60. Write a C program to create an enumerated data type for 7 days, displaying their values in integer constants.
#include <stdio.h>

enum weekday {
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
} ;


int main() {
    printf("Sun = %d", Sun);
    printf("\nMon = %d", Mon);
    printf("\nTue = %d", Tue);
    printf("\nWed = %d", Wed);
    printf("\nThu = %d", Thu);
    printf("\nFri = %d", Fri);
    printf("\nSat = %d", Sat);
    return 0;
}