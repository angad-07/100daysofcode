// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main(){
    int i,n,sum=0,c=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;c<+n;i++){
        if(i%2!=0){
            c++;
            sum += i;
        }
    }
    printf("The sum of the first %d odd numbers is: %d",n,sum);
}