#include <stdio.h>
int main()
{
    int a[5], i, max;
    printf("\nEnter 5 number: ");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i <= 4; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Max is %d", max);
}

// swap
// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 20, temp;
//     temp = a; // 10
//     a = b;    // 20
//     b = temp; // 30
//     printf("%d %d", a, b);
// }

// // bubble sort
// #include <stdio.h>
// int main()
// {
//     int a[5], i, j, t;
//     printf("\nEnter 5 no: ");
//     for (i = 0; i <= 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     // sorting
//     for (i = 0; i <= 4; i++)
//     {
//         for (j = 0; j <= 3; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 t = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = t;
//             }
//         }
//     }

//     for (i = 0; i <= 4; i++)
//     {
//         printf("\n%d", a[i]);
//     }
// }
