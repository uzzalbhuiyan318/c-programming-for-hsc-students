#include<stdio.h>
#define pi 3.1416
int main()
{
    double radius, area;
    printf("Enter radius here: ");
    scanf("%lf",&radius);
    area=pi*radius*radius;
    printf("Area of the circle is %.2lf",area);
}
