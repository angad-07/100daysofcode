// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20
*/

#include <stdio.h>

int main(){
    int length = 5;
    int width = 10;

    int a = length * width;
    int p = 2*(length+width);

    printf("\nThe area is: %d\n",a);
    printf("The perimeter is: %d",p);

    return 0;
}