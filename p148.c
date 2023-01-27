//148. Write a C program, which adds up columns and rows of a given table as shown in the following figure.
#include <stdio.h>

int main() {
    int border, numbers[101][101];
    printf("Input number of rows/columns:\n");
    scanf("%i", &border);
    printf("Input each row's values:");
    for (int i = 0; i < border; i++) {
        printf("\n\nRow %i's values:\n", i + 1);
        for (int j = 0; j < border; j++) {
            scanf("%i", &numbers[i][j]);
        }
    }
    printf("\n\nResult:\n");
    for (int i = 0; i < border; i++) {
        numbers[i][border] = 0;
        numbers[border][i] = 0;
        for (int j = 0; j < border; j++) {
            printf("%5i ", numbers[i][j]);
            numbers[i][border] += numbers[i][j];
            numbers[border][i] += numbers[j][i];
        }
        numbers[border][border] += numbers[i][border];
        printf("%5i ", numbers[i][border]);
        printf("\n");
    }
    for (int i = 0; i <= border; i++) {
        printf("%5i ", numbers[border][i]);
    }
    return 0;
}