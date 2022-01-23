/*
==========================================================================

 Problem     : printf  1 2 3 4 5 6.........n using for loop
 Author      : Uzzal Bhuiyan
 Version     :
 Copyright   : OpenSource

==========================================================================
*/
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter your desire number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
