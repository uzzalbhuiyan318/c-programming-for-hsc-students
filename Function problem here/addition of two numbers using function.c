// C program to add two numbers using function

#include<stdio.h>

int add(int a,int b)
{
    int result;
    result=a+b;
    return result;
}
int main()
{
    int num1,num2,addition;
    scanf("%d %d",&num1,&num2);
    addition=add(num1,num2);
    printf("Addition of the two number is %d",addition);

   return 0;


}
