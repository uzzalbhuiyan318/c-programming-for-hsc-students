/*
==========================================================================

 Problem     : print all odd numbers from 1 to n with newline using for loop
 Author      : Uzzal_Bhuiyan
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
        if(i%2==1)
        {
             printf("%d\n",i);
        }

    }
}




