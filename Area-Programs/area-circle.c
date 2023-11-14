// formula area=3.14*r*r;

#include <stdio.h>
int main()
{
    float area, r;
    printf("Enter the Radius: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf("Area of Circle %f", area);
}