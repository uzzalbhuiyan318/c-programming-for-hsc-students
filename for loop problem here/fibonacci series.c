// Take an input from user and find a sequence of Fibonacci series
// sample input: 5
// sample output: 0 1 1 2 3

#include<stdio.h>
int main()
{
    int n,i,first,second,count,fibonacci;
    printf("Enter your sequence range: ");
    scanf("%d",&n);

    first=0; second=1;
    count=0;
    while(count<n)
    {
        if(count<=1)
        {
            fibonacci=count;
        }
        else
        {
            fibonacci=first+second;
            first=second;
            second=fibonacci;
        }
        printf("%d ",fibonacci);
        count++;
    }
}
