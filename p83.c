//83. Write a C program which reads an integer (7 digits or fewer), and counts the number of 3s in the given number. 
#include <stdio.h>
#include <string.h>

int main() {
    int length, count = 0;
    char *integer, threes[] = "333333333";
    printf("Input an integer (7 digits or fewer): ");
    scanf("%s", integer);
    length = strlen(integer);
    for (int i = 0; i < length; i++) {
        if (integer[i] == threes[i]) {
            count += 1;
        }
    }
    printf("The number of 3's in %s is %i", integer, count);
    return 0;
}