// formula area=l*b;

#include <stdio.h>
int main()
{
    float area, l, b;
    printf("Enter the Length: ");
    scanf("%f", &l);
    printf("Enter the Breadth: ");
    scanf("%f", &b);
    area = l * b;
    printf("Area of Rectange %f", area);
}