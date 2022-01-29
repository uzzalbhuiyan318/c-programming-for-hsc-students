#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0;
    printf("Enter your desire number here: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    printf("Summation of the series is %d",sum);
}
