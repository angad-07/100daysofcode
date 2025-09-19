// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/

#include <stdio.h>

int main(){
    int a,b,ch,ans;

    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("\nChoose the options to perform the corresponding operation:\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
    printf("Choose: ");
    scanf("%d",&ch);

    if ((ch>=1)&&(ch<=5)){
        switch (ch){
        case 1:
            ans = a + b;
            printf("The Addition is: %d",ans);
            break;
        case 2:
            if (a>b){
                ans = a - b;
                printf("The Subtraction is: %d",ans);
            }
            else{
                ans = b - a;
                printf("The Subtraction is: %d",ans);
            }
            break;
        case 3:
            ans = a * b;
            printf("The Multiplication is: %d",ans);
            break;
        case 4:
            ans = a / b;
            printf("The Division is: %d",ans);
            break;
        case 5:
            ans = a % b;
            printf("The Modulus is: %d",ans);
            break;
        }
    }
    else{
        printf("\nInvalid Input!\nExiting");
    }
    return 0;
}