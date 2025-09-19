//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

// LCM(a,b) = (a × b) / GCF(a,b)

#include <stdio.h>

int main(){
    int n1,n2,temp;

    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    int t1 = n1;
    int t2 = n2;
    
    while(n2!=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }

    int lcm = (t1*t2)/n1;
    printf("%d",lcm);
    return 0;
}