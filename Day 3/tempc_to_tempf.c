// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/

#include <stdio.h>

int main(){
    float temp_c;

    printf("Enter the temperature in Celcius: ");
    scanf("%f",&temp_c);

    float temp_f = (temp_c*(9.0/5.0)) + 32;
    printf("The temperature in Fahrenheit is: %.0f",temp_f);

    return 0;
}