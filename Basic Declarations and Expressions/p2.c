//2. Write a C program to get the C version you are using.
#include <stdio.h>

int main() {
    long version = __STDC_VERSION__;
    if (version >= 201710L) {
        printf("We are using C18!");
    } else {
        printf("We are using an oldhead version which is lame.");
    }
    return 0;
}
