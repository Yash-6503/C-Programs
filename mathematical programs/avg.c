// formula for average of 3 numbers avg=(a+b+c)/3

#include <stdio.h>
int main()
{
    float avg, a, b, c;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Enter the third number: ");
    scanf("%f", &c);
    avg = (a + b + c) / 3;
    printf("Average of 3 numbers %f", avg);
}