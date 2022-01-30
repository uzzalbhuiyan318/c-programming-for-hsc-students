//take an input from user and draw a pattern
// sample input 5
//sample output:
//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5

#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter your first input here: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}

