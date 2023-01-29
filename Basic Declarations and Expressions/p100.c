//100. Write a C program to convert a currency value (floating point with two decimal places) to the possible number of notes and coins.
#include <stdio.h>

void main() {
    float inputValue;
    int notesValue, coinsValue;
    int hundreds, fifties, twenties, tens, fives, twos, ones, fiftycents, twentycents, tencents, fivecents;
    hundreds=fifties=twenties=tens=fives=twos=ones=fiftycents=twentycents=tencents=fivecents=0;
    printf("Input the currency value (floating point with two decimal places): $");
    scanf("%f", &inputValue);
    notesValue = (int)inputValue;
    coinsValue = (inputValue-notesValue) * 100;
    printf("%i", coinsValue);
    printf("\n\nCurrency Notes: ");
    while (notesValue != 0){
        while (notesValue % 100 != notesValue){
            hundreds += 1;
            notesValue -= 100;
        } printf("Number of $100 note(s): %i\n", hundreds);
        while (notesValue % 50 != notesValue){
            fifties += 1;
            notesValue -= 50;
        } printf("Number of $50 note(s): %i\n", fifties);
        while (notesValue % 20 != notesValue){
            twenties += 1;
            notesValue -= 20;
        } printf("Number of $20 note(s): %i\n", twenties);
        while (notesValue % 10 != notesValue){
            tens += 1;
            notesValue -= 10;
        } printf("Number of $10 note(s): %i\n", tens);
        while (notesValue % 5 != notesValue){
            fives += 1;
            notesValue -= 5;
        } printf("Number of $5 note(s): %i\n", fives);
        while (notesValue % 2 != notesValue){
            twos += 1;
            notesValue -= 2;
        }
        while (notesValue % 1 != notesValue){
            ones += 1;
            notesValue -= 1;
        }
    }
    printf("\nCurrency Coins:\n");
    printf("Number of $2 coins: %i\n", twos);
    printf("Number of $1 coins: %i\n", ones);
    while (coinsValue != 0) {
        while (coinsValue % 50 != coinsValue){
            fiftycents += 1;
            coinsValue -= 50;
        } printf("Number of 50 cent coin(s): %i\n", fiftycents);
        while (coinsValue % 20 != coinsValue){
            twentycents += 1;
            coinsValue -= 20;
        } printf("Number of 20 cent coin(s): %i\n", twentycents);
        while (coinsValue % 10 != coinsValue){
            tencents += 1;
            coinsValue -= 10;
        } printf("Number of 10 cent coin(s): %i\n", tencents);
        while (coinsValue % 5 != coinsValue){
            fivecents += 1;
            coinsValue -= 5;
        } printf("Number of $10 note(s): %i\n", fivecents);
    }
}
