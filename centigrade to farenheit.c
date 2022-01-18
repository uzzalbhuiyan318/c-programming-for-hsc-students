#include<stdio.h>
int main()
{
    double c,f;
    printf("Enter your centigrade temperature here: ");
    scanf("%lf",&c);
    f=(((9*c)/5)+32);
    printf("Fahrenheit temperature is %.2lf",f);


    return 0;
}
