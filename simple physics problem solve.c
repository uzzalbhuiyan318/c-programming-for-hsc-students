// when velocity and time is given find the value of displacement

#include<stdio.h>
int main()
{
    int displacement, velocity, time;
    printf("Enter the value of velocity here: ");
    scanf("%d",&velocity);
    printf("Enter the value of time here: ");
    scanf("%d",&time);
    displacement=velocity*time;

    printf("The value of displacement is %d",displacement);


    return 0;
}
