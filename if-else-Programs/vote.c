#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Eligible for Vote");
    }
    else
    {
        printf("Not Eligible for Vote");
    }
}