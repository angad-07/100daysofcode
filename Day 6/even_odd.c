//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even
*/

#include <stdio.h>

int main(){
    int a;
    printf("Enter an integer to check whether it is even or odd: ");
    scanf("%d",&a);

    if (a%2==0){
        printf("the number %d is even!",a);}
    else{
        printf("The number %d is odd!",a);}

    return 0;
}