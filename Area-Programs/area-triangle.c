// formula area=0,5*b*h;

#include <stdio.h>
int main()
{
    float area, h, b;
    printf("Enter the Base: ");
    scanf("%f", &b);
    printf("Enter the Height: ");
    scanf("%f", &h);
    area = 0.5 * b * h;
    printf("Area of Triangle %f", area);
}