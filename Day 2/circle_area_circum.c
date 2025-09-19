// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>

int main(){
    int r = 7;

    float a = 3.1415*r*r;
    float c = 2*3.1415*r;

    printf("The area is: %.2f\n",a);
    printf("The circumference is: %.2f",c);

    return 0;
}