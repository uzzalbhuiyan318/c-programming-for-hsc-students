#include<stdio.h>
#include<stdlib.h>
int main()
{
    int guessingNumber, RandomNumber;

    while(1)
    {
        printf("Enter your guessing number here: ");
        scanf("%d",&guessingNumber);
        RandomNumber=1+rand()%5;
        if(guessingNumber==RandomNumber)
        {
            printf("you won the match\n");
        }
        else
        {
            printf("you lost the match\n");
            printf("The random number was %d\n",RandomNumber);
        }
    }

}

