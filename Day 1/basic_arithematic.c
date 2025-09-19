// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    float quot = a / b;

    printf("\nSum: %d\n",sum);
    printf("Difference: %d\n",diff);
    printf("Product: %d\n",prod);
    printf("Quotient: %d",quot);

    return 0;
}