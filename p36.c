//36. Write a C program to read a password until it is correct. For the wrong password, print "Incorrect password" and for the correct password, print "Correct password" and quit the program. 
//The correct password is '1234'
#include <stdio.h>
#include <string.h>

void main() {
    char password[] = "1234", guess[20];
    printf("Please enter the password: ");
    scanf("%s", &guess);
    while (strcmp(password,guess) != 0) {
        printf("Incorrect password. Please try again.\n");
        printf("Please enter the password: ");
        scanf("%s", &guess);
    }
    printf("Correct password!");
}