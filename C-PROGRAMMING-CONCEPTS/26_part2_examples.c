//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Pointers
// Description: This program is linked with the previous program, here we will be manipulating several examples
// linked with pointers
//*****************************************************************************************************

#include <stdio.h>

int main(void)
{
    // Declaring any random variables
    int x;
    float z;
    char y;

    // Storing some value in it
    x = 3;
    y = 'x';
    z = 3.14;

    // Declaring pointers to store the adresses of the above variables

    int *ptrx = &x;
    char *ptry = &y;
    float *ptrz = &z;

    // Referencing

    printf("The value of x is %d and its memory adress is %p\n", *ptrx, ptrx);
    printf("The value of y is %c and its memory adress is %p\n", *ptry, ptry);
    printf("The value of z is %f and its memory adress is %p\n", *ptrz, ptrz);

    // Derefrencing

    *ptrx = 100;

    printf("The value of x is %d which is stored at %p\n", x, &ptrx);

    ptrx = &y; // Now ptrx has the adress of variable y and vice versa
    ptry = &x;
    printf("The value of x is %d, which is now stored at %p\n", x, &ptry);

    return 0;
}