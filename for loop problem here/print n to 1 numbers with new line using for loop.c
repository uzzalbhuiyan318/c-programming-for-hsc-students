/*
==========================================================================

 Problem     : print  n n-1 n-2.......3 2 1 with new line using for loop
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

    for(i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
}
