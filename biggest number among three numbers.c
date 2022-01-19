#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter first number here: ");
    scanf("%d",&num1);
    printf("Enter second number here: ");
    scanf("%d",&num2);
    printf("Enter third number here: ");
    scanf("%d",&num3);

    if((num1>num2) && (num1>num3))
    {
        printf("%d is biggest",num1);
    }
    else if(num2>num3)
    {
        printf("%d is biggest",num2);
    }
    else if(num1==num2==num3)
    {
        printf("they all are equal");
    }
   else
   {
       printf("%d is biggest",num3);
   }


    return 0;
}
