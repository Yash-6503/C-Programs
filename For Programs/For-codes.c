// // #include <stdio.h>
// // int main()
// // {
// //     int i;
// //     for (i = 10; i >= 1; i--)
// //     {
// //         printf("\n%d", i);
// //     }
// // }

// #include <stdio.h>
// int main()
// {
//     int i, n = 5;
//     for (i = 1; i <= 10; i++)
//     {
//         printf("\n%d", n * i);
//         // i = i + n;
//     }
// }

// // Square program with *

// // #include <stdio.h>
// // int main()
// // {
// //     int i, j;
// //     for (i = 1; i <= 5; i++)
// //     {
// //         for (j = 1; j <= 5; j++)
// //         {
// //             printf("*");
// //         }
// //         printf("\n");
// //     }
// // }

// // #include <stdio.h>
// // int main()
// // {
// //     int i, j;
// //     for (i = 1; i <= 5; i++)
// //     {
// //         for (j = 1; j <= 5; j++)
// //         {
// //             printf("%d ", j);
// //         }
// //         printf("\n");
// //     }
// // }

// // Triangle code
// // #include <stdio.h>
// // int main()
// // {
// //     int i, j;
// //     for (i = 1; i <= 10 ; i++)
// //     {
// //         for (j = 1; j <= i; j++)
// //         {
// //             printf("*");
// //         }
// //         printf("\n");
// //     }
// // }

// // #include <stdio.h>
// // int main()
// // {
// //     int i, j;
// //     for (i = 10; i >= 1; i--)
// //     {
// //         for (j = 1; j <= i; j++)
// //         {
// //             printf("*");
// //         }
// //         printf("\n");
// //     }
// // }

#include <stdio.h>
int main()
{
    int side, area, i;
    for (i = 1; i <= 2; i++)
    {
        printf("\nEnter the side: ");
        scanf("%d", &side);
        area = side * side;
        printf("\nArea of square is %d", area);
    }
}