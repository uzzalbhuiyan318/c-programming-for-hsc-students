// find factorial using function

#include<stdio.h>
int factorial (int y)
{
    if(y==0)
        return 1;
    else
        return (y*factorial(y-1));
}
int main()
{
    int num,x;
    scanf("%d",&num);
    x=factorial(num);
    printf("%d",x);
}
