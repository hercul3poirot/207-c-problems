//66. Write a C program that generates 50 random numbers between -0.5 and 0.5, and writes them in a file rand.dat. 
//The first line of ran.dat contains the number of data, and the next 50 lines contain the 50 random numbers.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main() {
    FILE *fp;
    float tempNum;
    fp = fopen("rand.dat", "w+");
    fputs("50",fp);
    srand(time(NULL));
    for (int i = 1; i <= 50; i++) {
        tempNum = (float)(rand() % 2001 - 1000) / 2000;
        //Explanation of above: %2001 will produce a value that is between 0-2000, -1000 makes it between -1000-1000 and /2000 makes it -0.5-0.5.
        fputs("\n", fp);
        fprintf(fp, "%.4f", tempNum);
        //Can use cvgt() to convert into string and then use fputs(), but fprintf() is easier!
    }
}