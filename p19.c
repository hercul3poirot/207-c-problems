//19. Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
#include <stdio.h>

void main(){
    int p,q,r,s;
    printf("Input the first integer: ");
    scanf("%i", &p);
    printf("Input the second integer: ");
    scanf("%i", &q);
    printf("Input the third integer: ");
    scanf("%i", &r);
    printf("Input the fourth integer: ");
    scanf("%i", &s);    
    if (q > r && s > p && s > (p+q)) {
        printf("Correct values");
    } else {
        printf("Wrong values");
    }
}