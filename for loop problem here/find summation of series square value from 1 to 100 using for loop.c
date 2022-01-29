/*
==========================================================================
 Problem     : 1^2 + 2^2 + 3^2 +.......+100^2 find the summation using for loop
 Author      : Uzzal_Bhuiyan
 Version     :
 Copyright   : OpenSource
==========================================================================
*/
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        sum=sum+pow(i,2);
    }
    printf("Summation of the series is %d",sum);

    return 0;
}
