// 43. 
#include <stdio.h>
int test(int arr[], int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] == 10 || arr[i] == 20) {
            count++;
        }
        if (count == 2) {
            return 1;
        }
    }
    return 0;
}



int main(void){
    int arr_size;
    int array1[] = {12, 20};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {20, 20};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] =  {10};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
}  