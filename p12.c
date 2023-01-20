//12. Write a C program that accepts an employee's ID, total worked hours of a month and the amount he recieved per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
#include <stdio.h>
int main(){
    char ID[11];
    float workingHours, hourlyRate;
    printf("Input the Employee's ID(Max. 10 chars): ");
    scanf("%s", &ID);
    printf("Input the working hours: ");
    scanf("%f", &workingHours);
    printf("Salary amount/hr: ");
    scanf("%f", &hourlyRate);
    printf("Employees ID = %s\nSalary = $%.2f", ID, workingHours*hourlyRate);
    return 0;
}