//,5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 units and a width of 5 units. (reworking to make it any dimensions).
#include <stdio.h>

void main() {
    int height;
    int width;
    printf("Please enter the height of the rectangle: ");
    scanf("%d", &height);
    printf("Please enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Perimeter of the rectangle = %d units\n", 2*(height + width));
    printf("Area of the rectangle = %d units²", height*width);
}
