//137. Write a C program to check if a point (x, y) is within a triangle or not. The triangle has formed by three points. 
#include <stdio.h>
#include <stdlib.h>

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

int main() {
    int x1, y1, x2, y2, x3, y3, x, y;
    printf("Input three points to form a triangle:\n");
    scanf("%i,%i,%i,%i,%i,%i",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("\nInput the point to check whether it is inside the triangle or not.");
    scanf("%i,%i",&x,&y);
   float A = area (x1, y1, x2, y2, x3, y3);
   float A1 = area (x, y, x2, y2, x3, y3);
   float A2 = area (x1, y1, x, y, x3, y3);
   float A3 = area (x1, y1, x2, y2, x, y);
   if (A == A1 + A2 + A3) {
       printf("The point is inside the triangle!");
   } else {
       printf("The point isn't inside the triangle!");
   }
   return 0;
}