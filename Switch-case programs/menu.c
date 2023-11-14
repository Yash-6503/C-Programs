#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch, num1, num2, result;
    do
    {
        printf("\n1.Addition");
        printf("\n2.Substract");
        printf("\n3.Multiply");
        printf("\n4.Divide");
        printf("\n5.Exit");
        printf("\nEnter your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter number1 to add: ");
            scanf("%d", &num1);
            printf("Enter number2 to add: ");
            scanf("%d", &num2);
            result = num1 + num2;
            printf("Addition is %d \n", result);
            break;

        case 2:
            printf("Enter number1 to Sub: ");
            scanf("%d", &num1);
            printf("Enter number2 to Sub: ");
            scanf("%d", &num2);
            result = num1 - num2;
            printf("Substract is %d \n", result);
            break;

        case 3:
            printf("Enter number1 to Multiply: ");
            scanf("%d", &num1);
            printf("Enter number2 to Multiply: ");
            scanf("%d", &num2);
            result = num1 * num2;
            printf("Multiplication is %d \n", result);
            break;

        case 4:
            printf("Enter number1 to divide: ");
            scanf("%d", &num1);
            printf("Enter number2 to divide: ");
            scanf("%d", &num2);
            result = num1 / num2;
            printf("Division is %d \n", result);
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("Invalid Choice\n Enter a correct choice");
        }
    } while (ch != 5);
}