#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    double radius, volume;
    printf("Enter your radius value here: ");
    scanf("%lf",&radius);
    volume=((4*pi*pow(radius,3))/3);// you may us (radius*radius*radius) instead of pow(radius,3)
    printf("Volume of the Sphere is %.2lf",volume);

    return 0;
}
