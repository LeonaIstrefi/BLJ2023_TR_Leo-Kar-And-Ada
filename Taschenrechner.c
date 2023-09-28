#include <stdio.h>
#include "CalculatorFunctions.h"

int main()
{
    int fac = 5; 
    float num1 = 2;
    float num2 = 3;
    float num3 = 3;
    int exp;
    int base;
    float result;
    char operation;
    float n;
    char playAgain;
    printf("Choose an operation: +, -, *, /, ^x, ~x, x!, r\n");
    scanf("%s", &operation);
    switch (operation)
    {
    case '+':
        printf("Choose 3 numbers:\n");
        scanf("%f", &num1);
        scanf("%f", &num2);
        scanf("%f", &num3);
        printf("%f + %f + %f = %f", num1, num2, num3, sum(num1, num2, num3));
        break;
    case '-':
        printf("Choose 3 numbers:\n");
        scanf("%f", &num1);
        scanf("%f", &num2);
        scanf("%f", &num3);
        printf("%f - %f - %f = %f", num1, num2, num3, sub(num1, num2, num3));
        break;
    case '*':
        printf("Choose 3 numbers:\n");
        scanf("%f", &num1);
        scanf("%f", &num2);
        scanf("%f", &num3);
        printf("%f * %f * %f = %f", num1, num2, num3, multi(num1, num2, num3));
        break;
    case '/':
        printf("Choose 3 numbers:\n");
        scanf("%f", &num1);
        scanf("%f", &num2);
        scanf("%f", &num3);
        printf("%f / %f / %f = %f", num1, num2, num3, divi(num1, num2, num3));
        break;
    case '^':
        printf("Choose a base and an exponent:\n");
        scanf("%d", &base);
        scanf("%d", &exp);
        printf("%d^%d = %d", base, exp, expo(base, exp));
        break;
    case '~':
        printf("Choose a number of which you want to know the root:\n");
        scanf("%f", &n);
        printf("%f~ = %f", n, root(n));
        break;
    case '!':
        printf("Choose a number of which you want to know the faculty:\n");
        scanf("%d", &fac);
        printf("%d! = %d", fac, faculty(fac));
        break;
    case 'r':
        do
        {
            RPS();
            printf("Do you want to play again? (y/n): ");
            scanf(" %c", &playAgain);
        } while (playAgain == 'y' || playAgain == 'Y');
    }
    return 0;
}