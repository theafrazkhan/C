//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Null Pointer
// Description:

//*****************************************************************************************************

#include <stdio.h>

int main(void)
{

    int a = 34;

    int *ptr = &a;

    printf("The adress of a is %d", ptr);

    // since null pointer cannot be dereferenced and can crash the program so to avoid this,we can
    // check if a pointer is null and can print it if it is not.

    int *ptrb = NULL;
    printf("The value of ptrb is %d", ptrb);

    // derefrencing

    if (ptrb != NULL)
        printf("the value at ptrb is %d", *ptrb);

    else
        printf("The pointer is a null pointer and cannot be dereferenced\n");

    return 0;
}