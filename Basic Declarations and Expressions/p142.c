//142. Write a C program which reads the two adjoined sides and the diagonal of a parallelogram, and check whether the parallelogram is a rectangle, a rhombus, or a parallelogram.
//Note: Adjoined = Adjacent.
#include <stdio.h>

int main() {
    int side1, side2, diagonal;
    char *shape;
    printf("Input two adjoined sides of the parallelogram:\n");
    scanf("%i", &side1);
    scanf("%i", &side2);
    printf("Input the diagonal of the parallelogram:\n");
    scanf("%i", &diagonal);
    if (side1 * side1 + side2 * side2 == diagonal * diagonal) {
        shape = "rectangle";
    }
    else if (side1 == side2) {
        shape = "rhombus";
    } else {
        shape = "parallelogram";
    }
    printf("This is a %s.", shape);
    return 0;
}
