/*
==========================================================================

 Problem     : print all odd numbers from 100 to 1 with newline using for loop
 Author      : Uzzal Bhuiyan
 Version     :
 Copyright   : OpenSource

==========================================================================
*/
#include<stdio.h>
void main()
{
    int i;
    //printf("Enter your desire number: ");
    //scanf("%d",&n);

    for(i=100;i>=1;i--)
    {
        if(i%2==1)
        {
             printf("%d\n",i);
        }

    }
}

