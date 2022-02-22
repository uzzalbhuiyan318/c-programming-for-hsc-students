/*
==========================================================================
 Problem      : Find largest number using ternary operator
 Sample input : 4 5 6
 Sample output: 6 is largest number
 Author       : Uzzal_Bhuiyan
 Version      :
 Copyright    : OpenSource
==========================================================================
*/

#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three numbers: ");

    scanf("%d %d %d",&a,&b,&c);

    (a>b)?((a>c)?(printf("%d is largest number",a)):(printf("%d is largest number",c))):((b>c)?(printf("%d is largest number",b)):(printf("%d is largest number",c)));











}

