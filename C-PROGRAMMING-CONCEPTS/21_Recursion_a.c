//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Factorial using recursion
// Description: This program uses recursion to find the factorial to know how it works see the documentation
// of recursion in the same repo
//*****************************************************************************************************

#include <stdio.h>

int factorial(int number);

int main(void)
{

    int number, fact;

    printf("Enter a number: ");
    scanf("%d", &number);

    fact = factorial(number);

    printf("Factorial of %d is %d\n", number, fact);

    return 0;
}

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}