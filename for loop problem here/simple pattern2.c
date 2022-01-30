// Take an input from user and draw a pattern
// Sample input: 5
// Sample output:
//     *
//     * *
//     * * *
//     * * * *
//     * * * * *

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter your first input here: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
