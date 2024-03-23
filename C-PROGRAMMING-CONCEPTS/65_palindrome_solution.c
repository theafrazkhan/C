//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Palindrome
// Description:

//*****************************************************************************************************

#include <stdio.h>

int palindrome(int num);

int main(void)
{

    int num;

    printf("Enter a number to check wether it's palindrome: ");
    scanf("%d", &num);

    if (palindrome(num))
    {
        printf("The given number is a palindrome\n");
    }
    else
    {
        printf("The given number is not a palindrome\n");
    }
    return 0;
}

int palindrome(int num)
{
    int num_cpy = num;
    int rev = 0;

    while (num_cpy > 0)
    {
        rev += num_cpy % 10;
        num_cpy /= 10;
        rev *= 10;
    }
    rev /= 10;

    if (num == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
