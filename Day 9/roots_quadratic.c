//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/

#include <stdio.h>
#include <math.h>
// x^2 - 5x + 6 - real and distinct
// x^2 - 6x + 9 - real and equal
// x^2 + 1      - imaginary

int main(){
    int a;
    int b;
    int c;
    printf("Enter the coefficient of x^2(a): ");
    scanf("%d",&a);
    printf("Enter the coefficient of x(b): ");
    scanf("%d",&b);
    printf("Enter the constant of the equation c: ");
    scanf("%d",&c);

    int root1, root2, discrim;

    discrim = (b*b)-(4*a*c);
    root1 = (-b + sqrt(discrim))/(2*a);
    root2 = (-b - sqrt(discrim))/(2*a);

    if (discrim>0){
        printf("Roots are real and distinct: %d & %d",root1,root2);}
    if (discrim==0){
        printf("Roots are real and equal: %d",root1,root2);}
    if (discrim<0){
        printf("Roots are imaginary");}
    return 0;
}