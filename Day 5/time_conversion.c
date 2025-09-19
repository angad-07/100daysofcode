//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>

int main(){
    int t;
    printf("Enter the time in seconds: ");
    scanf("%d",&t);

    int h,m,s;
    h = t/3600;         // the division operator truncates/omits the decimal points in the quotient
    s = t%60;           // the modulus % operator returns only the remainder
    m = ((t%3600)-s)/60;

    printf("%d:",h);
    printf("%d:",m);
    printf("%d",s);
}