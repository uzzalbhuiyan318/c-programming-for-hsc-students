// Take an input from user and print roll number equal inputted value

#include<stdio.h>
main()
{
    int arr[100];
    int i,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Roll = %d\n",arr[i]);
    }
}
