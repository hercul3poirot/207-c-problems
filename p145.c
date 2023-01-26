//145. Write a C program to sum of all numerical values (positive integers) embedded in a sentence. 
#include <stdio.h>
#define MAX 1200

int main() {
    char sentence[MAX], c;
    int sum = 0, length = 0;
    printf("Input Sentences with positive integers:\n");
    for(;;) {
        c = getchar();
        if (c == EOF) {
            break;
        } else {
            sentence[length] = c;
        }
        length++;
    }
    for (int i = 0; i < length; i++) {
        if ( sentence[i] >= 48 && sentence[i] <= 57) {
            sum += (sentence[i] - '0');
        } 
    }
    printf("\nSum of all numerical values embedded in a sentence:\n%i", sum);
    return 0;
}