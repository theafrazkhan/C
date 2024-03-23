//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Dangling Pointer
// Description:

//*****************************************************************************************************

#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 35;
    sum = a + b;
    return &sum;
}
int main(void)
{
    // cases for formation of dangling pointers

    // case 1: De allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));

    ptr[0] = 55;
    ptr[1] = 35;
    ptr[2] = 65;
    ptr[3] = 57;
    ptr[4] = 25;

    free(ptr); // ptr is now a dangling pointer

    // case 2: Function returning adress of local variables

    int *dangptr = functionDangling(); // Dangptr is now a dangling pointer

    // Case 3: If a variable goes out of scope

    int *danglingptr3;

    {
        int a = 34;
        danglingptr3 = &a;
    } // block of code
    // here a goes out of scope, so danglingptr3 is pointing at a memory whick is freed

    // danglingptr3 is now a dangling pointer

    return 0;
}