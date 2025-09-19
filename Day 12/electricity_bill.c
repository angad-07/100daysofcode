// Q24: Write a program to calculate electricity bill based on units consumed with these rates: 

                // First 100 units at ₹5/unit 
                // Next 100 units at ₹7/unit 
                // Next 100 units at ₹10/unit 
                // Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700
*/

#include <stdio.h>

int main(){

    int bill, units;
    printf("Enter the number of units: ");
    scanf("%d",&units);

    if (units<=100){
        bill = (units*5);
        printf("bill is: %d",bill);
    }
    if ((units>100)&&(units<200)){
        bill = (units-100)*7 + 500;
        printf("Bill is: %d",bill);
    }
    if ((units>200)&&(units<300)){
        bill = ((units-200)*10) + 1200;
        printf("Bill is: %d",bill);
    }
    if (units>400){
        bill = ((units-400)*12) + 2200;
        printf("Bill is: %d",bill);
    }
    return 0;
}