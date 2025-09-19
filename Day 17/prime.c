//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/

#include <stdio.h>

int main(){
    int a,i,isprime = 1;
    printf("Enter a number: ");
    scanf("%d",&a);

    if (a<=0){
        printf("Enter a valid number other than 0 and -ve integer!");
    }
    else if (a==2){
        printf("Prime!");
    }
    else{
        for(i=3;i<a;i++){
            if (a%i==0){
                isprime = 0;
                break;
            }
        }
    }
    if (isprime){
        printf("Prime!");
    }
    else{
        printf("Not a prime!");
    }
}