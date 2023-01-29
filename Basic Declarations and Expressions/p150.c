//150. Write a C program that reads an expression and evaluates it.
#include <stdio.h>
#include <stdlib.h>

int isASCIINumber(char c) {
    if (c >= 48 && c <= 57) {
        return 0;
    }
    return 1; 
}

int toThePowerOf(int number, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else if (exponent == 1) {
        return number;
    } else {
        return number * toThePowerOf(number, exponent - 1);
    }
}

int theFirstInt(char arr[], int middle, int remStart) {
    int i = 1, result = 0;
    while (isASCIINumber(arr[middle - i]) == 0) {
        result += (arr[middle - i] - '0') * toThePowerOf(10, i - 1);
        i++;
    }
    remStart = middle - i; 
    return result;
}

int theSecondInt(char arr[], int middle) {
    int i = 1, result = 0;
    while (isASCIINumber(arr[middle + i]) == 0) {
        i++;
    }
    for (int j = 1; j < i; j++) {
       result += (arr[middle + j] - '0') * toThePowerOf(10, i - j - 1); 
    }
    return result;
}

int end(char arr[], int middle) { //Was going to work this into the above function but it was bugging.
    int i = 1, result = 0;
    while (isASCIINumber(arr[middle + i]) == 0) {
        i++;
    }
    return middle + i - 1;
}

int main() {
    char expression[1000], c;
    for (int i = 0; i < 1000; i++) {
        expression[i] = 0;
    }
    int onNumber, num1 = 0, num2 = 0, placeValue = 1, temp, length = 0, remStart, remEnd;
    printf("Input an expression using +, -, *, / operators:\n");
    scanf("%s", expression);
    while (expression[1] != 0) {
        for (int i = 0; i <= 1000; i++) {
            if (isASCIINumber(expression[i]) == 0 || expression[i] == 42 || expression[i] == 43 || expression[i] == 45 || expression[i] == 47) {
                if (isASCIINumber(expression[i]) == 1) {
                    if (expression[i] == '/') {
                        num1 = theFirstInt(expression, i, remStart);
                        num2 = theSecondInt(expression, i);
                        remEnd = end(expression, i);
                        temp = num1 / num2;
                        for (int i = remStart; i <= remEnd; i++) {
                            expression[i] = 0;
                        }
                        expression[remStart] = temp;
                        for (int i = remStart + 1; i < remEnd - remStart; i++) {
                            expression[i] = expression[i + (remEnd - remStart) - 1];
                        }
                    } else if (expression[i] == '*') {
                        num1 = theFirstInt(expression, i, remStart);
                        num2 = theSecondInt(expression, i);
                        remEnd = end(expression, i);
                        temp = num1 * num2;
                        for (int i = remStart; i <= remEnd; i++) {
                            expression[i] = 0;
                        }
                        expression[remStart] = temp;
                        for (int i = remStart + 1; i < remEnd - remStart; i++) {
                            expression[i] = expression[i + (remEnd - remStart) - 1];
                        }
                    } else if (expression[i] == '+') {
                        num1 = theFirstInt(expression, i, remStart);
                        num2 = theSecondInt(expression, i);
                        remEnd = end(expression, i);
                        temp = num1 + num2;
                        for (int i = remStart; i <= remEnd; i++) {
                            expression[i] = 0;
                        }
                        expression[remStart] = temp;
                        for (int i = remStart + 1; i < remEnd - remStart; i++) {
                            expression[i] = expression[i + (remEnd - remStart) - 1];
                        }
                    } else if (expression[i] == '-') {
                        num1 = theFirstInt(expression, i, remStart);
                        num2 = theSecondInt(expression, i);
                        remEnd = end(expression, i);
                        temp = num1 - num2;
                        for (int i = remStart; i <= remEnd; i++) {
                            expression[i] = 0;
                        }
                        expression[remStart] = temp;
                        for (int i = remStart + 1; i < remEnd - remStart; i++) {
                            expression[i] = expression[i + (remEnd - remStart) - 1];
                        }
                    }
                }
            }
        }
    }
    if (expression[0] < 0) {
        printf("%i", expression[0] + 256);
    } else {
        printf("%i", expression[0]);
    }
    return 0;
}
