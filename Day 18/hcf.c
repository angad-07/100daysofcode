// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/

#include <stdio.h>

int main(){
    int n1,n2,temp,temp1,temp2;

    printf("Enter no.1: ");
    scanf("%d",&n1);
    temp1 = n1;
    printf("Enter no.2: ");
    scanf("%d",&n2);
    temp2 = n2;

    while(n2!=0){
        temp = n2;
        n2 = n1%n2;
        n1 = temp;
    }

    printf("The HCF of %d & %d is: %d",temp1,temp2,n1);
}