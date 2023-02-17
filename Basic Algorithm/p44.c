// 44. Write a C program to check a given array of integers of length 3 and 
// create a  new array. If there is a 5 in the given array immediately followed 
// by a 7 then set 7 to 1.
#include <stdio.h>

int main(void) {
    int length, nums[] ={1, 5, 7}, newNums[3];
    printf("Elements of the original array are: ");
    for (int i = 0; i < 3; i++) {
        (i == 2) ? printf("%i", nums[i]) : printf("%i, ", nums[i]);
        //Does the sneaky while printing
        if (nums[i] == 7) {
            if (nums[i - 1] == 5) {
                newNums[i] = 1;
            }
        } else {
           newNums[i] = nums[i]; 
        }
    }
    printf("\nElements in new array are: ");
    for (int i = 0; i < 3; i++) {
        (i == 2) ? printf("%i", nums[i]) : printf("%i, ", nums[i]);
    }
    return 0;
}