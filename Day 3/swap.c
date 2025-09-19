// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1
*/

#include <stdio.h>

int main(){
    int a = 3;
    int b = 5;
    printf("Initially, a is: %d\n",a);
    printf("Initially, b is: %d\n",b);

    int x = b;
    b = a;
    a = x;

    printf("\nAfter swapping, a is: %d\n",a);
    printf("After swapping, b is: %d",b);

    return 0;
}