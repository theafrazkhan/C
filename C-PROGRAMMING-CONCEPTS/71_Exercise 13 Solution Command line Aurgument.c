//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Short heading
// Description: Have a look at Readme.md file to have detailed insights of this program

//*****************************************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Invalid commoand line aurguments\n Usage ./Filename operator number1 number 2\n");
    }

    else if (strcmp((argv[1]), "/") == 0 || strcmp((argv[1]), "*") == 0 || strcmp((argv[1]), "+") == 0 || strcmp((argv[1]), "-") == 0)
    {
        printf("Invalid operator please select from the following\n");
        printf("/, *, +, -\n");
        return 0;
    }
    char operation;

    if (strcmp(argv[2], "+") == 0)
        operation = '+';
    else if (strcmp(argv[2], "-") == 0)
        operation = '-';
    else if (strcmp(argv[2], "*") == 0)
        operation = '*';
    else if (strcmp(argv[2], "/") == 0)
        operation = '/';

    int num1 = atoi(argv[1]), num2 = atoi(argv[3]);
    printf("num1 is %d and num2 is %d and operation is %c", num1, num2, operation);
    switch (operation)
    {
    case '+':

        printf("The sum is %d", num1 + num2);
        break;
    case '-':
        printf("The difference is %d", num1 - num2);
        break;
    case '/':
        printf("The quotient is %d", num1 / num2);
        break;
    case '*':
        printf("The product is %d", num1 * num2);
    }

    return 0;
}