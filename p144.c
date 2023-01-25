//144. Write a C program to create maximum number of regions obtained by drawing n given straight lines.
//Explanation: The nth line can cross (n-1) lines, adding n regions. 
//We thus get a recursive formula R(n)* = n + R(n-1)
//*Where R(x) is a function which returns the amount of regions created by x lines.
#include <stdio.h>

int R(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n + R(n-1);
    }
}

int main() {
    int lines, regions;
    printf("Input number of straight lines:\n");
    scanf("%i", &lines);
    regions = R(lines);
    printf("Maximum number of regions obtained by drawing 2 given straight lines:\n%i", regions);
}
