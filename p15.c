//15. Write a C program to calculate the distance between two points on a Cartesian plane.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int straightDistance(int pointOne, int pointTwo) {
    return abs(pointTwo-pointOne);
}

int main(){
    int x1, x2, y1, y2; 
    float diagonalDistance;
    printf("Input x1: ");
    scanf("%i", &x1);
    printf("Input y1: ");
    scanf("%i", &y1);
    printf("Input x2: ");
    scanf("%i", &x2);
    printf("Input y2: ");
    scanf("%i", &y2);
    diagonalDistance = sqrt(straightDistance(x1,x2)*straightDistance(x1,x2) + straightDistance(y1,y2)*straightDistance(y1,y2));
    printf("Distance between the given points: %f", diagonalDistance);
    return 0;
}