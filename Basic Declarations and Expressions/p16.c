//16. Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
#include <stdio.h>

int main(){
    int cashAmount, hundredCount, fiftyCount, twentyCount, tenCount, fiveCount, twoCount, oneCount;
    printf("Input the cash amount: $");
    scanf("%i", &cashAmount);
    while (cashAmount >= 100){
        hundredCount += 1;
        cashAmount -= 100;
    } 
    while (cashAmount >= 50) {
        fiftyCount += 1;
        cashAmount -= 50;
    }
    while (cashAmount >= 20) {
        twentyCount += 1;
        cashAmount -= 20;
    }
    while (cashAmount >= 10) {
        tenCount += 1;
        cashAmount -= 10;
    }
    while (cashAmount >= 5){
        fiveCount += 1;
        cashAmount -= 5;
    }
    while (cashAmount >= 2){
        twoCount += 1;
        cashAmount -= 2; 
    }
    while (cashAmount >= 1){
        oneCount += 1;
        cashAmount -= 1;
    }
    printf("%i Note(s) of $100.00\n", hundredCount);
    printf("%i Note(s) of $50.00\n", fiftyCount);
    printf("%i Note(s) of $20.00\n", twentyCount);
    printf("%i Note(s) of $10.00\n", tenCount);
    printf("%i Note(s) of $5.00\n", fiveCount);
    printf("%i Note(s) of $2.00\n", twoCount);
    printf("%i Note(s) of $1.00\n", oneCount);    
    return 0;
}
