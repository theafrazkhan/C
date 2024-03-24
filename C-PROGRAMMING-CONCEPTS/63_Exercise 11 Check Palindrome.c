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
    // Your code goes here

    // Function should return 1 if palindrome
    // Or 0 in the other case
}
