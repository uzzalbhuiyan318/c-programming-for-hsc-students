#include<stdio.h>
#define pi 3.1416
int main()
{
    double radius, theta, area;
    printf("Enter radius value here: ");
    scanf("%lf",&radius);
    printf("Enter theta value here: ");
    scanf("%lf",&theta);
    area=((pi*radius*radius)/360);
    printf("Area of the Sector is %.2lf",area);

    return 0;
}
