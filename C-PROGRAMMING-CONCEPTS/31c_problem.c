//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Function call by reference
// Description: Problem: Using call by reference, Given two numbers a and b, add them, subtract them,
// stored them in a and b

//*****************************************************************************************************

#include <stdio.h>

void func(int *a, int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;
}

int main(void)
{

    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Values you entered are: x: %d   y: %d\n", x, y);
    printf("Calling the function.................\n");

    func(&x, &y);

    printf("Values after calling function are: x: %d    y: %d\n", x, y);

    return 0;
}