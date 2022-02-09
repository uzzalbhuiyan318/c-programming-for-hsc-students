// C program to find even or odd number using function

#include<stdio.h>

void evenOdd (int a)
{
    if(a%2==0)
    {
        printf("even number");
    }
    else
        printf("odd number");
}



int main()
{
    int n;
    scanf("%d",&n);
    evenOdd(n);

    return 0;

}
