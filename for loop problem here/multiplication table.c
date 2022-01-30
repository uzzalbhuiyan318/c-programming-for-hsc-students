//take an input from user and print that number multiplication table

#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter your desire table number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d= %d",n,i,(n*i));

        printf("\n");
    }
}
