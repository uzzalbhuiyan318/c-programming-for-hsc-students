/*
==========================================================================

 Problem     : print all even numbers from 1 to 100 with newline using for loop
 Author      : Uzzal_Bhuiyan
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

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
             printf("%d\n",i);
        }

    }
}


