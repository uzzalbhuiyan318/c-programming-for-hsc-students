#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number here: ");
    scanf("%d",&num);


    if(num>0)
    {
        printf("this is positive number");
    }
    else if(num<0)
    {
        printf("This is negative number");
    }
    else
    {
        printf("This is zero");
    }


    return 0;
}
