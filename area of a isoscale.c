#include<stdio.h>
int main()
{
    double a,b,area;
    printf("Enter base value here: ");
    scanf("%lf",&a);
    printf("Enter another arm value here: ");
    scanf("%lf",&b);
    area=(a*sqrt(4*(b*b)-(a*a))/4);
    printf("Area of the isosceles is %.2lf",area);

    return 0;
}
