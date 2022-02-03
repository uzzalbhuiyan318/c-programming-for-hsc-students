// Take some input from user and print roll and result
#include<stdio.h>
#define size 5
main()
{
    int i,n;
    double result[size];
    int roll[size];
    //scanf("%d",&n);

    for(i=0;i<size;i++)
    {
        printf("roll and result =");
        scanf("%d %lf",&roll[i],&result[i]);
    }
    for(i=0;i<size;i++)
    {

        printf("roll=%d and result=%lf\n",roll[i],result[i]);
    }
}
