#include<stdio.h>
int main()
{
    int height, width, area;
    printf("Enter height value here: ");
    scanf("%d",&height);
    printf("Enter width value here: ");
    scanf("%d",&width);
    area=height*width;
    printf("Area of the rectangle is %d",area);

    return 0;
}
