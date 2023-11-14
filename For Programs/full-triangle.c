// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = i; j <= 10; j++)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int a, b, c, ans;
    do
    {
        printf("\nEnter 2 numbers: ");
        scanf("%i%i", &a, &b);
        c = a + b;
        printf("Answer is %i", c);
        printf("\nDo you want to Continue then click 1: ");
        scanf("%d", ans);
    } while (ans == 1);
}
