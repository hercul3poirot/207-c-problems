//149. Write a C program, which reads a list of pairs of a word and a page number, and prints the word and a list of the corresponding page numbers.
#include <stdio.h>
#include <string.h>

typedef struct{
    char word[1000];
    int number;
} page;

page pages[1000];

int structAlphabeticalSort(int num){
   page temp;
   for(int i = 0; i < num-1; i++) { //Bubble sort
        for(int j = i + 1; j < num; j++) {
            if(strcmp(pages[i].word,pages[j].word)>0) { 
                temp = pages[i];
                pages[i] = pages[j];
                pages[j] = temp;
            }
        }
    }
}

int main() {
    int count = 0, iterationcount;
    printf("Enter a word and it's page number separated by a space:\n");
    while (scanf("%s %i", pages[count].word, &pages[count].number) != EOF) {
        count++;
    }
    structAlphabeticalSort(count);
    printf("\nWord and page_no number in alphabetical order:\n");
    for (int i = 0; i <= count - 1; i++) {
        iterationcount = 1;
        if (strcmp(pages[i].word, pages[i+1].word) == 0) {
            printf("%s %i ", pages[i].word, pages[i].number);
            while (strcmp(pages[i].word, pages[i + iterationcount].word) == 0) {
                printf("%i ", pages[i + iterationcount].number);
                iterationcount++;
            }
            printf("\n");
        }
        if (iterationcount == 1) {
            printf("%s %i\n", pages[i].word, pages[i].number);
        }
        i += iterationcount - 1;
    }
    return 0;
}
