#include<stdio.h>
int main()
{
    int num1, num2, reminder;
    printf("Enter your first number: ");
    scanf("%d",&num1);
    printf("Enter your second nubmer: ");
    scanf("%d",&num2);
    reminder=num1%num2;
    printf("Reminder is %d",reminder);
}
