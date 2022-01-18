#include<stdio.h>
int main()
{
    double c,f;
    printf("Enter Fahrenheit temperature: ");
    scanf("%lf",&f);
    c=(5*(f-32))/9;
    printf("centigrade temperature is %.2lf",c);


    return 0;
}
