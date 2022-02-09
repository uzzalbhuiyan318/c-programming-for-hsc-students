// take two number and swap the two numbers
// sample input: a=2 b=3
// sample output: a=3 b=2
#include<stdio.h>
int swap (int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    return x,y;
}
main()
{
    int a,b;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);

    printf("a=%d",swap(a));
    printf("b=%d",swap(b));
}
