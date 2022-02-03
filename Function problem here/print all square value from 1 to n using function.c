// Print all square value from 1 to n using function
// sample input: 5
// sample output: 1 4 9 16 25

#include<stdio.h>

int square (int element)
{
    return element*element;
}


int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",square(i));
    }

}
