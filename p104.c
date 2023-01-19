//104. Write a C program that reads an item's price as well as its increased price, outputting the float/percentage value of the difference between the two values.
#include <stdio.h>

void main(){
    float org, inc, dif;
    printf("Input the item's original price: $");
    scanf("%f", &org);
    printf("Input the item's original price: $");
    scanf("%f", &inc);
    dif = inc - org;
    printf("Increased price: $%.2f", dif);
    printf("\nIncreased percentage: %.2f%%", 100 * (dif/org));
}
