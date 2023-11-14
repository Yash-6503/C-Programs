// /*Table of 5 using addition in while loop
// #include <stdio.h>
// int main()
// {
//     int i = 5;
//     while (i <= 50)
//     {
//         printf("\n%d", i);
//         i = i + 5;
//     }
// }*/

// // Table of 5 using multiplication in while loop
// // #include <stdio.h>
// // int main()
// // {
// //     int i = 1;
// //     while (i <= 10)
// //     {
// //         printf("\n%d", i * 5);
// //         i++;
// //     }
// // }

// // #include <stdio.h>
// // int main()
// // {
// //     int i = 1, n;
// //     printf("\nEnter a number:");
// //     scanf("%d", &n);
// //     while (i <= 10)
// //     {
// //         printf("\n%d", i * n);
// //         i++;
// //     }
// // }

// #include <stdio.h>
// int main()
// {
//     int i = 1, a, b, c;
//     while (i <= 2)
//     {
//         printf("\nEnter 2 numbers: ");
//         scanf("%d%d", &a, &b);
//         c = a + b;
//         printf("Addition is %d", c);
//         i++;
//     }
// }

#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("\nEnter a number:");
    scanf("%d", &n);
    do
    {
        printf("\n%d", i * n);
        i++;
    } while (i <= 10);
}