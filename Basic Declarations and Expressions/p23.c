//23. Write a C program that reads three floating values and checks whether it is possible to make a triangle with them. If it is possible, additionally calculate the perimeter of the triangle.
#include <stdio.h>

int main() {
    float sides[4], perimeter;
    for (int i = 0; i < 3; i++){
        printf("Input side length %i: ", (i+1));
        scanf("%f", &sides[i]);
        perimeter += sides[i];
    }
    if (((sides[0] + sides[1]) >= sides[2]) && ((sides[2] + sides[1]) >= sides[0]) && ((sides[0] + sides[2]) >= sides[1])) {
        printf("Perimeter: %.2f units", perimeter);
    } else {
        printf("Not possible to make a triangle with these three values!");
    }
    return 0;
}
