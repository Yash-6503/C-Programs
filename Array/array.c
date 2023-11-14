// 1-D array input & Display.
//  #include <stdio.h>
//  int main()
//  {
//      int a[5], i;
//      printf("\nEnter 5 no: ");
//      for (i = 0; i <= 4; i++)
//      {
//          scanf("%d", &a[i]);
//      }
//      for (i = 0; i <= 4; i++)
//      {
//          printf("\n%d", a[i]);
//      }
//  }

// 1-D array sum (5 number addition)
// #include <stdio.h>
// int main()
// {
//     int a[5], i, sum = 0;
//     printf("\nEnter 5 no: ");
//     for (i = 0; i <= 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i <= 4; i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("\nSum is %d ", sum);
// }

// search program of array
// #include <stdio.h>
// int main()
// {
//     int a[5], i, n, count = 0;
//     printf("\nEnter 5 no: ");
//     for (i = 0; i <= 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("\nEnter number to search: ");
//     scanf("%d", &n);
//     for (i = 0; i <= 4; i++)
//     {
//         if (a[i] == n)
//         {
//             count++;
//         }
//     }
//     printf("\nCount is %d", count);
// }

// to print array in reverse order
#include <stdio.h>
int main()
{
    int a[5], i;
    printf("\nEnter 5 no: ");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nReversed array is: ");
    for (i = 4; i >= 0; i--)
    {

        printf("\n%d", a[i]);
    }
}