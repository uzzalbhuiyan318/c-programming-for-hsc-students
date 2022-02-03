// Take some input from user and print them reverse way using array
// sample input: 5
//                1 2 3 4 5
// sample output: 5 4 3 2 1
#include<stdio.h>
main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("number printed in reverse way: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
