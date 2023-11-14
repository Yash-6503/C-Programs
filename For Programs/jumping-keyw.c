//
// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 1; i <= 10; i++)
//     {
//         if (i == 5)
//         {
//             break;
//         }
//         printf("\n%d", i);
//     }
// }

// continue
//  #include <stdio.h>
//  int main()
//  {
//      int i;
//      for (i = 1; i <= 10; i++)
//      {
//          if (i % 2 == 0)
//          {
//              continue;
//          }
//          printf("\n%d", i);
//      }
//  }

// goto

#include <stdio.h>
int main()
{
    int age;
Line1:
    printf("\nEnter Age: ");
    scanf("%d", &age);
    if (age >= 18 && age <= 80)
    {
        printf("Eligible for Vote");
    }
    else
    {
        printf("Not Eligible for Vote");
        goto Line1;
    }
}