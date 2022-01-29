#include<stdio.h>
#include<math.h>

int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        sum=sum+pow(i,2);
    }
    printf("Summation of the series is %d",sum);
}
