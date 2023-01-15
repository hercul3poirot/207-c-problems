//94. Write a C program to calculate body mass index and display the grade.
#include <stdio.h>

void main() {
    float weight, height, bmi;
    printf("Enter the weight: ");
    scanf("%f", &weight); 
    printf("Enter the height: ");
    scanf("%f", &height);
    bmi = weight/(height*height);
    printf("BMI = %f\n", bmi, height, weight);
    bmi < 18.5 ? printf("Under ") : bmi < 25 ? printf("Normal ") : bmi < 30 ? printf("Over ") : bmi < 40 ? printf("Obese ") : printf("Error");
}