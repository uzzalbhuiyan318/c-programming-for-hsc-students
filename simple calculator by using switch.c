#include<stdio.h>

int main()
{
    int  n,num1,num2,sum,sub,multi,div;

    while(1)
    {
        printf("Choose your option\n");

        printf("Press '1' for addition\n");

        printf("Press '2' for subtraction\n");

        printf("Press '3' for multiplication\n");

        printf("Press '4' for division\n");

        scanf("%d",&n);


        switch(n)
        {
        case 1:
            printf("Enter your first number here: ");
            scanf("%d",&num1);
            printf("Enter your second number here: ");
            scanf("%d",&num2);

            sum=num1+num2;

            printf("Summation of the two number is %d\n\n",sum);

            break;
        case 2:
            printf("Enter your first number here: ");
            scanf("%d",&num1);
            printf("Enter your second number here: ");
            scanf("%d",&num2);

            sub=num1-num2;

            printf("Subtraction of the two number is %d\n\n",sub);

            break;

        case 3:
            printf("Enter your first number here: ");
            scanf("%d",&num1);
            printf("Enter your second number here: ");
            scanf("%d",&num2);

            multi=num1*num2;

            printf("Multiplication of the two number is %d\n\n",multi);

            break;

        case 4:
            printf("Enter your first number here: ");
            scanf("%d",&num1);
            printf("Enter your second number here: ");
            scanf("%d",&num2);
            if(num2==0)
            {
                printf("number 2 is zero\n\n");
            }
            else
            {
                div=num1/num2;
                printf("Division of the two number is %d\n\n",div);

            }

            break;

        default:
            printf("math error !!!\n\n");


        }

    }



}
