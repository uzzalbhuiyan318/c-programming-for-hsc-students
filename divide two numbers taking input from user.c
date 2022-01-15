#include<stdio.h>
int main()
{
    double num1, num2, div;
    printf("Enter your first number: ");
    scanf("%lf",&num1);
    printf("Enter your second number: ");
    scanf("%lf",&num2);
    div=num1/num2;
    printf("Division of two number is %.2lf",div);
}
