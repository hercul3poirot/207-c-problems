//2. Write a C program that takes a string and two integers(n1, n2). Now reverse the sequence of characters of the string between n1 and n2.
#include <stdio.h>

int main() {
    char string[1000], c, temp;
    int length = 0, n1, n2, difference, checkValue;
    printf("Enter a string:\n");
    for (;;) {
        c = getchar();
        if (c == '\n') {
            break;
        } else {
            string[length] = c;
            length++;
        }
    }
    printf("Enter the indexes (starting at 1) for which part of the string you want swapped, separated by a comma:\n");
    scanf("%d,%d", &n1, &n2);
    for (int i = n1 - 1; i < n2 - 1; i++)  
    {  
        temp = string[i];  
        string[i] = string[n2 - 1];  
        string[n2 - 1] = temp;  
        n2--;  
    }  
    for (int i = 0; i < length; i++) {
        printf("%c", string[i]);
    }
    return 0;
}