//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Star patterns

// Description: Have a look at Readme.md file to have detailed insights of this program

//*****************************************************************************************************

#include <stdio.h>

// C program to print right half pyramid pattern of star
#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of Rows: ");
    scanf("%d", &rows);

    // Pattern n0. 1

    // first loop for printing rows
    for (int i = 0; i < rows; i++)
    {

        // second loop for printing character in each rows
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern n0. 2
    for (int i = 0; i < rows; i++)
    {

        // loop for printing leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }

        // loop for printing * character
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern n0. 3

    for (int i = 0; i < rows; i++)
    {

        // inner loop 1 to print white spaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }

        // inner loop 2 to print star * character
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern n0. 4

    for (int i = 0; i < rows; i++)
    {

        // first inner loop to print the * in each row
        for (int j = 0; j < rows - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern n0. 5
    for (int i = 0; i < rows; i++)
    {

        // first inner loop for printing white spaces
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        // second inner loop for printing star *
        for (int k = 0; k < rows - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern n0. 6
    for (int i = 0; i < rows; i++)
    {

        // first inner loop for printing leading white
        // spaces
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        // second inner loop for printing stars *
        for (int k = 0; k < 2 * (rows - i) - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern n0. 7
    for (int i = 0; i < rows; i++)
    {

        // first inner loop to print white spaces
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }

        // second inner loop to print * star in each row
        for (int k = 0; k < rows; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
