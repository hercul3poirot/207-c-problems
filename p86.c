//86. Write a C program to display the sizes and ranges for each of C's data types.
#include <stdio.h>

void main() {
    printf("Type                 Bytes\n");
    printf("----------------------------\n");
    printf("char                 %i\n", sizeof(char));       
    printf("int8_t               %i\n", sizeof(int8_t));     
    printf("unsigned char        %i\n", sizeof(unsigned char));   
    printf("uint8_t              %i\n", sizeof(uint8_t));    
    printf("short                %i\n", sizeof(short));      
    printf("int16_t              %i\n", sizeof(int16_t));       
    printf("int                  %i\n", sizeof(int));        
    printf("unsigned             %i\n", sizeof(unsigned));   
    printf("long                 %i\n", sizeof(long));       
    printf("unsigned long        %i\n", sizeof(unsigned long));   
    printf("int32_t              %i\n", sizeof(int32_t));    
    printf("uint32_t             %i\n", sizeof(uint32_t));   
    printf("long long            %i\n", sizeof(long long));       
    printf("int64_t              %i\n", sizeof(int64_t));    
    printf("unsigned long long   %i\n", sizeof(unsigned long));   
    printf("uint64_t             %i\n", sizeof(uint64_t));   
    printf("float                %i\n", sizeof(float));      
    printf("double               %i\n", sizeof(double));     
    printf("long double          %i\n", sizeof(long double));       
    printf("_Bool                %i\n", sizeof(_Bool));      
}