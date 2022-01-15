#include<stdio.h>
int main()
{
    float num1, num2, multiply;
    printf("Enter your first number: ");
    scanf("%f",&num1);
    printf("Enter your second number: ");
    scanf("%f",&num2);
    multiply=num1*num2;
    printf("Multiplication of the two numbers is %.2f",multiply);
}
