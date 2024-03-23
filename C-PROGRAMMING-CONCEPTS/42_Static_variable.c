//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Static variable, local and global variables
// Description: Static variables must have to be initialized before the execution of main program, if not it is
// initialized to 0 by default

//*****************************************************************************************************

#include <stdio.h>

int func1(int b)
{
    // printf("The adress of b inside func1 is %d\n",&b); //local and global b will have different adresses
    static int my_var = 0;

    printf("The value of my var is %d\n", my_var);
    my_var++;

    return b * 10;
}

int main(void)
{
    int b = 344;

    printf("The adress of b inside main is %d", &b); // local and global b will have different adresses

    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;

    printf("The value of func1 is %d", val);

    return 0;
}