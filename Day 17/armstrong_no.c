//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n,alt_num=0,rem,temp,c=0;

    printf("Enter a number to check for Armstrong: ");
    scanf("%d",&n);

    temp = n;
    while (n>0){
        c++;
        n/=10;
    }
    n = temp;

    while (n>0){
        rem=n%10;
        alt_num += pow(rem,c);
        n/=10;
    }
    if (alt_num==temp){
        printf("Armstrong number!");
    }
    else{
        printf("Not an Armstrong number!");
    }

    return 0;
}