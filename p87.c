//87. Write a C program to display the sizes and ranges for each of C's data types.
#include <stdio.h>
#include <float.h>
#include <limits.h>

int toThePowerOf(int number, int exponent) {
    if (exponent == 1) {
        return number;
    } else {
        return number * toThePowerOf(number, exponent - 1);
    }
}

int range(int bytes) {
    int bits, range;
    bits = bytes * 8;
    range = toThePowerOf(2, bits-1);
    return range;
}

void main(){
    printf("Ranges for integer data types in C\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("int8_t                %20i  %20i\n", -range(sizeof(int8_t)),range(sizeof(int8_t)));
    printf("int16_t               %20i  %20i\n", -range(sizeof(int16_t)),range(sizeof(int16_t)));
    printf("int32_t               %20i  %20i\n", -range(sizeof(int32_t)),range(sizeof(int32_t)));
    printf("int64_t               %20i  %20i\n", -range(sizeof(int64_t)),range(sizeof(int64_t)));
    printf("uint8_t               %20i  %20i\n", 0,range(sizeof(uint8_t)));
    printf("uint16_t              %20i  %20i\n", 0,range(sizeof(uint16_t)));
    printf("uint32_t              %20i  %20i\n", 0,range(sizeof(uint32_t)));
    printf("uint64_t              %20i  %20i\n", 0,range(sizeof(uint64_t)));
    printf("=================================================================================\n");
    printf( "Ranges for real number data types in C\n\n" );
    printf( "------------------------------------------------------------\n");
    printf( "float        %14.7g  %14.7g\n"   , FLT_MIN  , FLT_MAX  );
    printf( "double       %14.7g  %14.7g\n"   , DBL_MIN  , DBL_MAX  );
    printf( "long double  %14.7Lg  %14.7Lg\n" , LDBL_MIN , LDBL_MAX );
    printf( "\n" );
}

