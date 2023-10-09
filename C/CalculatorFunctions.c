#include "CalculatorFunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float sum(float num1, float num2, float num3)
{
    return num1 + num2 + num3;
}
float sub(float num1, float num2, float num3)
{
    return num1 - num2 - num3;
}
float multi(float num1, float num2, float num3)
{
    return num1 * num2 * num3;
}
float divi(float num1, float num2, float num3)
{
    return num1 / num2 / num3;
}
int expo(int base, int exp)
{
    if (exp < 0)
    {
        return -1;
    }
    int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
    return result;
}
float root(float n)
{
    float x = n;
    float y = 1;
    float e = 0.000001;
    while (x - y > e)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}
int faculty(int fac)
{
    int faktor, result = 1;
    for (faktor = 1; faktor <= fac; faktor++)
    {
        result *= faktor;
    }
    return result;
}
void RPS()
{
    srand(time(NULL));
    int playerChoice, computerChoice;
    
    printf("Let's play Rock, Paper, Scissors!\n");
    printf("Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
    scanf("%d", &playerChoice);
    
    if (playerChoice < 1 || playerChoice > 3)
    {
        printf("Invalid choice. Please choose 1 (Rock), 2 (Paper), or 3 (Scissors).\n");
        return;
    }
    
    computerChoice = rand() % 3 + 1;
    
    printf("Computer chose: ");
    switch (computerChoice)
    {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }
    
    if (playerChoice == computerChoice)
    {
        printf("It's a tie!\n");
    }
    else if ((playerChoice == 1 && computerChoice == 3) || 
             (playerChoice == 2 && computerChoice == 1) ||
             (playerChoice == 3 && computerChoice == 2))
    {
        printf("W`s in the chat!\n");
    }
    else
    {
        printf("Take the L!\n");
    }
    return 0;
}