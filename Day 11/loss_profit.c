// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/

#include <stdio.h>

int main(){
    float cp,sp,p,diff;

    printf("Enter the cost price: ");
    scanf("%f",&cp);
    printf("Enter the selling price: ");
    scanf("%f",&sp);

    if(cp<0 || sp<0){
        printf("Cost price/Selling price cannot be a negative integer!");
    }
    else{
        diff = cp - sp;
        p = (diff/cp)*100;

        if(diff<0){
            printf("Profit: %.2f%%",-p);
        }
        else if(diff>0){
            printf("Loss: %.2f%%",p);
        }
        else{
            printf("Break even point");
        }
    }
}