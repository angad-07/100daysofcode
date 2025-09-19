//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0
*/

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    printf("Enter number 3: ");
    scanf("%d",&c);    

    if ((a>=b)&&(b>=c)){
        printf("The largest number is: %d",a);
    }
    else if((b>=a)&&(b>=c)){
        printf("The largest number is: %d",b);
    }
    else{
        printf("The largest number is: %d",c);
    }

    return 0;
}