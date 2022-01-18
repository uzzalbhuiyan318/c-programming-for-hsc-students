#include<stdio.h>
int main()
{
    double a, area;//a means equal arm of a triangle
    printf("Enter equal arms value here: ");
    scanf("%lf",&a);
    area=((sqrt(3)*pow(a,2))/4);
    printf("Area of the equilateral triangle is %.2lf",area);

    return 0;

}
