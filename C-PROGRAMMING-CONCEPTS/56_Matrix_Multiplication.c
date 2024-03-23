//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Matrix Multiplication
// Description:

//*****************************************************************************************************

#include <stdio.h>

int main(void)
{

    int row1, col1, row2, col2;

data_collection:
    printf("Enter the number of rows for 1st matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for 1st matrix: ");
    scanf("%d", &col1);
    printf("Enter the number of rows for 2nd matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of rows for 2nd matrix: ");
    scanf("%d", &col2);

    if (col1 != row2)
    {
        printf("Not valid matrices for multiplication\n");
        printf("no. of columns of first matrix must be equal to no. of rows of second matrix\n\n");

        char choise;
        printf("Do you want to enter anothe matrix: (y,n)");
        scanf(" %c", &choise);
        if (choise == 'y' || choise == 'Y')
        {
            goto data_collection;
        }
        else
        {
            return 0;
        }
    }

    int matrix1[row1][col1];
    int matrix2[row2][col2];

    printf("Enter the entries of matrix 1\n\n");

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Enter value at matrix[ %d ] [ %d ]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the entries of matrix 2\n\n");

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Enter value at matrix[ %d ] [ %d ]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Multioplication starts here

    int sum = 0;
    int result[row1][col2];

    // Your code goes here

    // printing the resultant matrix

    for (int i = 0; i < row1; i++)
    {
        printf("");

        for (int j = 0; j < col2; j++)
        {
            printf(" %d\t", result[i][j]);
        }
        printf(" |\n");
    }
    return 0;
}