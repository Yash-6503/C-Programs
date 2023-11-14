// program to print 1-10 numbers using while loop
// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     while (i <= 10)
//     {
//         printf("\n%d", i);
//         i++;
//     }
// }

// program to print 10-1(reverse) numbers using while loop
// int main()
// {
//     int i = 10;
//     while (i >= 1)
//     {
//         printf("\n%d", i);
//         i--;
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int i = 1, side, area;
//     while (i <= 2)
//     {
//         printf("\nEnter Side of Square: ");
//         scanf("%d", &side);
//         area = side * side;
//         printf("\nArea of Square is %d", area);
//         i++;
//     }
// }

// Age calculator.....
#include <stdio.h>
int main()
{
    int dob_year, curr_year = 2023, age;
    printf("\nEnter your Birth Date Year: ");
    scanf("%d", &dob_year);
    age = curr_year - dob_year;
    printf("\n.........Your Age is %d.........", age);
    // if (age >= 18)
    // {
    //     printf("\n\n....You are Eligible to Vote....");
    // }
    // else
    // {
    //     printf("\n\n..You are Not Eligible to Vote..");
    // }
}