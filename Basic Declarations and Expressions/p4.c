//4. Write a C program to print the following characters in a reverse way.
#include <stdio.h>
#include <string.h>

int main() {
    char inputstring[4];
    char reversestring[4];
    printf("Please input the string to be reversed: ");
    scanf("%s", inputstring);
    //Failed length check ;(
    //int length = sizeof(inputstring);
    //printf("The size of this input string is %d.\n");
    //printf("This means that a 3 character array is ^^^ long.\n");
    for (int i = 0; inputstring[i] != '\0'; i++) {
        reversestring[i] = inputstring[2-i];
    }
    printf("The reverse of %.4s is %.4s.",inputstring, reversestring);
    return 0;
}
