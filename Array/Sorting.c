// Sorting with bubble sort

#include <stdio.h>
int main()
{
    int a[5], i, j, temp;
    printf("\nEnter 5 numbers: ");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i <= 4; i++)
    {
        printf("\n%d", a[i]);
    }
}

// Swaping

// #include <stdio.h>
// int main()
// {
//     int a = 100, b = 200, temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("%d %d", a, b);
// }

// Take three arrays and make Addition of two arrays.
// #include <stdio.h>
// int main()
// {
//     int a[5], b[5], c[5], i;
//     printf("\nEnter 5 numbers in array: ");
//     for (i = 0; i <= 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("\nEnter 5 numbers in array: ");
//     for (i = 0; i <= 4; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     for (i = 0; i <= 4; i++)
//     {
//         c[i] = a[i] + b[i];
//         printf("\nAddition is %d", c[i]);
//     }
// }