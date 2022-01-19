#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number here: ");
    scanf("%d",&num1);

    printf("Enter second number here: ");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("%d is bigger",num1);
    }
    else if (num2>num1)
    {
        printf("%d is bigger",num2);
    }
    else
    {
        printf("Two number is same or equal");
    }

    return 0;
}
