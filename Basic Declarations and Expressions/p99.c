//99. Write a C program that takes some integer values from the user a print a histogram.
#define HISTOGRAM_SYMBOL '#'
#include <stdio.h>

int main(){
    int barNumber, numbers[10];
    printf("Input number of histogram bar (Maximum 10): ");
    scanf("%i", &barNumber);
    printf("Input values between 0 and 10 (one per line):\n");
    for (int i = 0; i < barNumber; i++){
        scanf("%i", &numbers[i]);
    }
    printf("\n");
    for (int i = 0; i < barNumber; i++){
        printf("\n");
        for (int j = 0; j < numbers[i]; j++){
            printf("%c", HISTOGRAM_SYMBOL);
        }
    }
    return 0;
}
