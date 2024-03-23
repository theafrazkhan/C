//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Fucntions call by value
// Description: In this program we will be learning how to call a function by value, to learn more about this topic
// read the attached documentation for this program

// When we call a function by value, it means that we are passing the values of the aurguments,
// which are copied into the formal perameters of the function

// So the original perameters remain unchanged and only the perameters inside the function change

//*****************************************************************************************************

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int get_val(void)
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    return a;
}

int main(void)
{

    int alpha, beta;

    alpha = get_val();
    beta = get_val();

    int add = sum(alpha, beta);

    printf("The sum is %d\n", add);

    return 0;
}