// formula square=side*side;

#include <stdio.h>
int main()
{
    float square, side;
    printf("Enter the Side: ");
    scanf("%f", &side);
    square = side * side;
    printf("Area of Square %f", square);
}