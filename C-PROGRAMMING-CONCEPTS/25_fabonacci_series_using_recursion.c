//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Fabonacci series using iteration
// Description: In this program we will be printing the fabonacci series using iteration, to know more about
// fabonacci series read the documentation for this program.
//*****************************************************************************************************

#include <stdio.h>

void fabonacci_itr(int terms);
void fabonacci_rec(int terms);

int main(void)
{
    int terms;
    printf("This program will print the Fabonacci series for the number of terms provided\n");
    printf("Please enter the number of terms: ");
    scanf("%d", &terms);

    fabonacci(terms);

    return 0;
}

void fabonacci_rec(int terms)
{
    if (terms == 0 || terms == 1)
    {
        // Code goes here
    }
}

void fabonacci_itr(int terms)
{
    int first = 0, second = 1;
    int next;

    printf("%d, %d,", first, second);
    for (int i = 0; i < terms; i++)
    {
        next = first + second;
        printf(" %d,", next);
        first = second;
        second = next;
    }
}