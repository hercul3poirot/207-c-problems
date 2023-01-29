//138. Write a C program to test whether two lines are parallel or not.
#include <stdio.h>
#include <stdlib.h>

int main() {
    float x1, y1, x2, y2, x3, y3, x4, y4;
    printf("Input P(x1,y1):\n");
    scanf("%f",&x1);
    scanf("%f",&y1);    
    printf("\nInput Q(x2,y2):\n");
    scanf("%f",&x2);
    scanf("%f",&y2);
    printf("\nInput R(x3,y3):\n");
    scanf("%f",&x3);
    scanf("%f",&y3);
    printf("\nInput S(x4,y4):\n");
    scanf("%f",&x4);
    scanf("%f",&y4);
    if (abs((x2-x1)/(y2-y1)) == abs((x4-x3)/(y4-y3))){
        printf("\nPQ and RS are parallel!");
    } else {
        printf("\nPQ and RS are not parallel!");
    }
    return 0;
}
