//C program to determine power using pow function
// sample input: 3 5
// sample output:

#include<stdio.h>
#include<math.h>
main()
{
    int a,b,result;

    printf("Enter base value: ");
    scanf("%d",&a);
    printf("Enter power value: ");
    scanf("%d",&b);
    result=pow(a,b);

    printf("The result of a to the power b is %d",result);
}
