#include <stdio.h>
int main()
{
    float per;
    printf("\n Enter Percentage: ");
    scanf("%f", &per);
    if (per >= 75 && per <= 100)
    {
        printf("\n Great!! You have got Distinction");
    }
    else if (per >= 60 && per < 75)
    {
        printf("\nYeah!! You have hot First Class");
    }
    else if (per >= 50 && per < 60)
    {
        printf("\nGood!! You have hot Second Class");
    }
    else if (per >= 35 && per < 50)
    {
        printf("\nYou have Passed");
    }
    else if (per >= 0 && per < 35)
    {
        printf("\nOOPs!! You have Failed");
    }
    else
    {
        printf("Invalid");
    }
}