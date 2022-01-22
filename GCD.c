#include<stdio.h>
int main()
{
    int i,num1, num2,gcd;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    for(i=1; i<=num1 && i<=num2; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD of %d and %d is %d",num1,num2,gcd);


    return 0;
}
