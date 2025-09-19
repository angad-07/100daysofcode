// Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7
*/

#include <stdio.h>

int main(){
    
    int a=5;
    int b=3;
    printf("Initially, a is: %d\n",a);
    printf("Initially, b is: %d\n",b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter swapping, a is: %d\n",a);
    printf("After swapping, b is: %d",b);

    return 0;
}