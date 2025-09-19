// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>
#include <math.h>

int main(){
    int i=0,n,bin_=0,rem=0,place=1;

    printf("Enter the number: ");
    scanf("%d",&n);

    while (n>0){
        rem = n%2;
        n=n/2;
        bin_ = bin_ + rem*place;
        place = place*10;
    }

    printf("%d",bin_);
    return 0;
}




/* To convert a decimal number to binary, repeatedly divide the decimal number
by 2, recording the remainder (0 or 1) at each step . Continue this process until
the quotient becomes 0. Then, write the recorded remainders in reverse order
from bottom to top to obtain the binary equivalent */