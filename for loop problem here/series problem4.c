//2^2+4^2+6^2+.........+n^2

#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0;
    printf("Enter your desire number here: ");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
    {
        sum=sum+pow(i,2);
    }
    printf("Summation of the series is %d",sum);
}
