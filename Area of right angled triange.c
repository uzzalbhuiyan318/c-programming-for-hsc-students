#include<stdio.h>
int main()
{
    double first_arm_closest_rightAngle,second_arm_closest_rightAngle, area;
    printf("Enter first arm value here: ");
    scanf("%lf",&first_arm_closest_rightAngle);
    printf("Enter second arm value here: ");
    scanf("%lf",&second_arm_closest_rightAngle);
    area=.5*first_arm_closest_rightAngle*second_arm_closest_rightAngle;
    printf("Area of the general triangle is %.2lf",area);

    return 0;
}

