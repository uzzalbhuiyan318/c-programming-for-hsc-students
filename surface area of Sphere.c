#include<stdio.h>
#define pi 3.1416
int main()
{
    double radius, area;
    printf("Enter radius value here: ");
    scanf("%lf",&radius);
    area=4*pi*radius*radius;
    printf("Surface area of the Sphere is %.2lf",area);

    return 0;
}
