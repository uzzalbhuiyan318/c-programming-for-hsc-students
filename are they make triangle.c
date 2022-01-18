#include<stdio.h>
int main()
{
    int arm1,arm2,arm3;
    printf("Enter first arm value here: ");
    scanf("%d",&arm1);
    printf("Enter second arm value here: ");
    scanf("%d",&arm2);
    printf("Enter third arm value here: ");
    scanf("%d",&arm3);
    if((((arm1||arm2||arm3)!=0) &&((arm2+arm1)>arm3)) || ((arm1+arm3)>arm2) || ((arm2+arm3)>arm1))
    {
        printf("Possible to make a triangle");
    }
    else
        printf("not possible to make a triangle");


    return 0;
}
