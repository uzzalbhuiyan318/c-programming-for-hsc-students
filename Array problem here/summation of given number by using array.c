// C program to add all given number by using array
#include<stdio.h>
#define size 10
main()
{
    int i, arr[size]={10,20,30,40,50,60,70,80,90,100};
    int total=0;
    for(i=0;i<size;i++)
    {
        total=total+arr[i];
    }
    printf("Summation of all number is %d",total);
}
