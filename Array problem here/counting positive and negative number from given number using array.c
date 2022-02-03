// take some input from user and count positive and negative number from here
// sample input: 10 15 20 25 35
// sample output: positive=2 and negative=3

#include<stdio.h>
main()
{
    int i,positive,negative,arr[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    negative=0;
    positive=0;
    for(i=0;i<10;i++)
    {
        if(arr[i]>=0)
            positive=positive+1;
        else
            negative=negative+1;
    }
    printf(" positive=%d\nnegative=%d",positive,negative);
}
