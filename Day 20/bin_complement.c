//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>

int main(){
    int n,rem,bin_;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(n>0){
        rem=n%10;
        n=n/10;
        printf("%d",rem);
    }
    return 0;
}