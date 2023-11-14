#include <stdio.h>
int main()
{
    int i = 1, sum = 1, n;
    printf("Enter A number:");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum * i;
        i++;
    }
    printf("Sum is %d", sum);
}

// Sum of n numbers
//  int main()
//  {
//      int i = 1, sum = 0, n;
//      printf("Enter A number:");
//      scanf("%d", &n);
//      while (i <= n)
//      {
//          sum = sum + i;
//          i++;
//      }
//      printf("Sum is %d", sum);
//  }