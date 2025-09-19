// Q23: Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled
*/

#include <stdio.h>

int main(){

    int fine, days;
    printf("Enter the number of days: ");
    scanf("%d",&days);

    if (days<=5){
        fine = (days*2);
        printf("fine is: %d",fine);
    }
    if ((days>5)&&(days<10)){
        fine = days*4;
        printf("fine is: %d",fine);
    }
    if ((days>10)&&(days<30)){
        fine = days*6;
        printf("fine is: %d",fine);
    }
    if (days>30){
        printf("Membership Cancelled!");
    }
    return 0;
}