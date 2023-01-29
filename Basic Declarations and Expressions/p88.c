//88. Write a C program to create an extended ASCII table. Print the ASCII values 32 through 255. 
#include <stdio.h>

int main() {
    printf("|----------------------------------------------------------------------------------------------------------------|\n");
    printf("|extended ASCII table - excluding control characters                                                             |\n");
    printf("|   Ch Dec  Hex  |  Ch Dec  Hex  |  Ch Dec  Hex  |   Ch Dec Hex  |  Ch Dec  Hex  |  Ch Dec  Hex  |   Ch Dec  Hex |\n");
    printf("|----------------|---------------|---------------|---------------|---------------|---------------|---------------|\n");
    for (int i = 32; i <= 63; i++){
        for (int j = 1; j <= 7; j++){
            if (j != 7){
                printf("|  %char %d %x\t", i*j,i*j,i*j);
            } else{
                printf("|  %char %d %x\t |\n", i*j,i*j,i*j);
            }
        }
    }
    return 0;
}
