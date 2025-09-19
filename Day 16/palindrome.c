// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/

#include <stdio.h>

int main(){
    int n,rem,alt_num=0,temp;

    printf("Enter the number to check for Palindrome: ");
    scanf("%d",&n);

    temp = n;
    while (n>0){
        rem = n%10;
        alt_num = (alt_num*10) + rem;
        n /= 10;
    }

    if (alt_num==temp){
        printf("Palindrome!");
    }
    else{
        printf("Not a palindrome!");
    }

    return 0;
}