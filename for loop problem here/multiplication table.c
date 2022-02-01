//take an input from user and print that number multiplication table
//sample input 5
//sample output :
//                  5 x 1=5
//                  5 x 2=10
//                  5 x 3=15
//                  5 x 4=20
//                  ........
//                  5 x 10=50

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
