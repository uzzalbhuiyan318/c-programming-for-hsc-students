/*
==========================================================================

 Problem     : print all even numbers from n to 1 with newline using for loop
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

    for(i=n;i>=1;i--)
    {
        if(i%2==0)
        {
             printf("%d\n",i);
        }

    }
}






