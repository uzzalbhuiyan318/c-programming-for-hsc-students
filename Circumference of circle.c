#include<stdio.h>
#define pi 3.1416
int main()
{
    double radius, circumference;
    printf("Enter radius value here: ");
    scanf("%lf",&radius);
    circumference=2*pi*radius;
    printf("Circumference of the circle is %.2lf",circumference);

    return 0;
}
