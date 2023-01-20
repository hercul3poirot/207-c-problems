//50. Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.
#include <stdio.h>

//Method 1. Using a two dimensional array that stores the position and value of a flagged item in the array:
//Does not work cus of funky list features in C :(
// int main() {
//     int numbers[6], flagNumbers[3][6], addCount = 0, length;
//     printf("Input the 5 members of the array:\n");
//     for (int i = 0; i <= 4; i++) {
//         scanf("%i", &numbers[i]);
//         if (numbers[i] < 5) {
//             flagNumbers[0][addCount] = numbers[i];
//             flagNumbers[1][addCount] = i;
//             addCount += 1;
//         }
//     }
//     length = sizeof(flagNumbers)/sizeof(flagNumbers[0][0]);
//     for (int i = 0; i < length; i++){
//         printf("%i\n",flagNumbers[0][i]);
//     }
//     
return 0;
// }

//Method 2. Iterating over the list again such that it checks which elements are less than 5 natively.
int main() {
    int numbers[5];
    printf("Input the 5 members of the array:\n");
    for (int i = 0; i <= 4; i++) {
        scanf("%i", &numbers[i]);
    }
    for (int i = 0; i <= 4; i++) {
        if (numbers[i] < 5) {
            printf("\nA[%i] = %i", i, numbers[i]);
        }
    }
    return 0;
}