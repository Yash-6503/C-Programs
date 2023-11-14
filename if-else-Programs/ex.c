// // #include <stdio.h>
// // int main()
// // {
// //     int i, j, n = 'A';
// //     char ch = 'A';
// //     for (i = 1; i <= 5; i++)
// //     {
// //         for (j = 1; j <= i; j++)
// //         {
// //             printf("%c", n);
// //         }
// //         printf("\n");
// //     }
// // }

// #include <stdio.h>
// int main()
// {
//     int i, j, n = 5;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// // #include <stdio.h>
// // int main()
// // {
// //     int i, j, n = 5;
// //     for (i = 1; i <= n; i++)
// //     {
// //         for (j = 1; j <= n; j++)
// //         {
// //             printf("*");
// //         }
// //         printf("\n");
// //     }
// // }

#include <stdio.h>
int main()
{
    int a[5], n, i, count = 0;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the number to search: ");
    scanf("%d", &n);
    for (i = 0; i < 4; i++)
    {
        printf("\n%d", a[i]);
        if (n == a[i])
        {
            count++;
        }
    }
    printf("\nCount is %d", count);
}

// #include <stdio.h>
// int main()
// {
//     int a[5], i;
//     printf("Enter 5 numbers: ");
//     for (i = 0; i < 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < 4; i++)
//     {
//         printf("\n%d", a[i]);
//     }
// }