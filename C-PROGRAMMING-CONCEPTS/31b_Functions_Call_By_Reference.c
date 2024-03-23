//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Functions call by reference
// Description: In this program we are going to practice calling a function by reference. to learn more
// about this topic read the documentation on calling a function by reference

// The call by reference method of passing aurguments to a c function copies the adress of the aurguments
// into the formal perameters, Adresses of the actual aurguments are copied and then assigned to the
// corresponding formal aurgments
//*****************************************************************************************************

#include <stdio.h>

void replace(int *x)
{
    *x = 56;
}
int main(void)
{
    int a = 1;

    printf("The value of a now is %d\n", a);
    replace(&a);

    printf("The value of a after calling the function is %d\n", a);

    return 0;
}