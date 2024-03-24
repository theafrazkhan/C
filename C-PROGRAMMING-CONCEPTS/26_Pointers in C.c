//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: pointers
// Description: In this program we will be manipulating the basic syntax of pointers in c
// To know more about pointers and how it works, read the documentaion attached with this program.
//*****************************************************************************************************

#include <stdio.h>

int main(void)
{
    printf("Lets learn about pointers in c\n");

    int a = 76;

    int *ptra = &a; // storing address of integer a in ptra

    printf("The adress of a is %p\n", &a);
    printf("The adress of a is %p\n", ptra); // adress of a is also stored in the pointer,
                                             // So, printing the pointer will result in the adress of a.
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptra); // Derefrencing the pointer for the value stored at the adress
                                             // stored in it.
    printf("The adress of the pointer is %p\n", &ptra);

    return 0;
}