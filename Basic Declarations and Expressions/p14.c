//14. Write a C program to calculate a bike's average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number - 2 decimal points).
#include <stdio.h>

int main() {
    int distance;
    float fuelSpent;
    printf("Input total distance in km: ");
    scanf("%i", &distance);
    printf("Input total duel spent in liters: ");
    scanf("%f", &fuelSpent);
    printf("Average consumption (km/lt): %.2f", distance/fuelSpent);
    return 0;
}
