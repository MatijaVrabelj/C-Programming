#include <stdio.h>

int main()
{
    double a, b, c;
    char operation;

    printf("This is simple calculator program!\n");

    printf("Please enter two numbers\n");

    printf("First Number: ");
    scanf("%lf", &a);
    printf("\n");
    printf("Second number: ");
    scanf("%lf", &b);
    printf("\n");

    printf("Now enter which mathematical operation you want to do on two given numbers(+,-,/,*): ");
    scanf(" %c", &operation);

    printf("\n");
    switch (operation)
    {
    case '+':
        c = a + b;
        printf("SUM: %f", c);
        break;
    case '-':
        c = a - b;
        printf("SUB: %f", c);
        break;
    case '/':
        c = a / b;
        printf("DIV: %f", c);
        break;
    case '*':
        c = a * b;
        printf("SUM: %f", c);
        break;

    default:
        printf("%c is Invalid operation!", operation);
        break;
    }

    return 0;
}