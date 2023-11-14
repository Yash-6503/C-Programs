#include <stdio.h>
int main()
{
    int a[5], sum = 0, i, n;
    printf("\nEnter number to sum: ");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum is %d", sum);
}