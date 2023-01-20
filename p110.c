//110. Write a C program to find the odd, even, positive and negative characteristics of a given integer.
//For example, 15 is positive-odd, while -2 is negative-even.
#include <stdio.h>

struct number {
    char *sign;
    char *polarity;
};

int main() {
    int input;
    struct number result;
    printf("Enter a number:\n");
    scanf("%i", &input);
    if (input >= 0) {
        result.sign = "positive"; //While 0 isn't positive or negative, I allowed it to be positive for simplicity's sake.
    } else {
        result.sign = "negative"; 
    }
    if (input % 2 == 0){
        result.polarity = "even";
    } else {
        result.polarity = "odd";
    }
    printf("Number is %s-%s", result.sign, result.polarity);
    return 0;
}