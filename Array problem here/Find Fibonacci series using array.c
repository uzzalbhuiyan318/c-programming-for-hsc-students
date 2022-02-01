// Take an input from user and find Fibonacci series using array
// Sample input: 8
// Sample output: 0 1 1 2 3 5 8 13

#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter your series Range here: ");
    scanf("%d",&n);

    arr[0]=0;
    arr[1]=1;

    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
