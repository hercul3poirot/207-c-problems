//37. Write a C program to read coordinates (x, y) (using the Cartesian plane), and determine the quadrant to which the points belong to.
//Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
//Cont. These are often numbered from 1st to 4th and are denoted by Roman numberals: I (+,+), II (-,+), III (-,-), and IV (+,-)
#include <stdio.h>

int main() {
    float x,y;
    printf("Input coordinates (x,y): ");
    scanf("%f,%f",&x,&y);
    if (x == 0 || y == 0) {
        printf("Lies between quadrants!");
    }
    else if (x > 0 && y > 0){
        printf("Quadrant I(+,+)");
    } 
    else if (x < 0 && y > 0){
        printf("Quadrant II(-,+)");
    }
    else if (x < 0 && y < 0) {
        printf("Quadrant III(-,-)");
    } 
    else {
        printf("Quadrant IV(+,-)");
    }
    return 0;
}
