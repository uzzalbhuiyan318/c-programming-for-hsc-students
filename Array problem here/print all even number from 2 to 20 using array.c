// print all even number from 2 to 20 using array
#include<stdio.h>
#define size 10
main()
{
    int i;
    int even[size];
    for(i=0;i<size;i++)
    {
        even[i]=2+2*i;
    }
    printf("%10s%12s\n","element","value");
    for(i=0;i<size;i++)
    {
        printf("%7d%13d\n",i,even[i]);
    }
}
