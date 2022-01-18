#include<stdio.h>
int main()
{
    double base, height, area;
    printf("Enter base value here: ");
    scanf("%lf",&base);
    printf("Enter height value here: ");
    scanf("%lf",&height);
    area=.5*base*height;
    printf("Area of the general triangle is %.2lf",area);

    return 0;
}
