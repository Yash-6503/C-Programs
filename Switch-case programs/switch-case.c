#include <stdio.h>
int main()
{
    int option, a, b, c, ans, l, h, side, area;
    do
    {
        printf("\n1.Addition");
        printf("\n2.Substract");
        printf("\n3.Multiplication");
        printf("\n4.Divide");
        printf("\n5.Area of Rectangele");
        printf("\n6.Area of Square");
        printf("\n7.Area of Triangle");
        printf("\nEnter Option:");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter 2 no:");
            scanf("%d%d", &a, &b);
            c = a + b;
            printf("Addition is %d", c);
            break;

        case 2:
            printf("\nEnter 2 no:");
            scanf("%d%d", &a, &b);
            c = a - b;
            printf("Substract is %d", c);
            break;

        case 3:
            printf("\nEnter 2 no:");
            scanf("%d%d", &a, &b);
            c = a * b;
            printf("Multiplication is %d", c);
            break;
        case 4:
            printf("\nEnter 2 no:");
            scanf("%d%d", &a, &b);
            c = a / b;
            printf("Divide is %d", c);
            break;

        case 5:
            printf("\nEnter 2 no:");
            scanf("%d%d", &l, &b);
            area = l * b;
            printf("Area of Rectangele is %d", area);
            break;

        case 6:
            printf("\nEnter side:");
            scanf("%d", &side);
            area = side * side;
            printf("Area of Square is %d", area);
            break;

        case 7:
            printf("\nEnter 2 no:");
            scanf("%d%d", &b, &h);
            area = 0.5 * b * h;
            printf("Area of Triangle is %d", c);
            break;

        default:
            printf("\nInvalid option");
            break;
        }

        printf("\nDo u want to continue:");
        scanf("%d", &ans);
    } while (ans == 1);
}