//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Arrays and Pointer Arithmetic
// Description: In this program we will be demonstrating pointer arithmatic (++, --, +, -)

//*****************************************************************************************************

#include <stdio.h>

int main(void)
{

    int a = 2;

    int *ptr = &a;

    printf("The adress of a is %d\n", ptr);

    ptr++;

    printf("The adress after incrementing is %d", ptr); // it will increment the pointer by 4 and not by 1

    printf("\nAdding 2 two the above pointer, see 8 will be added since integer have four bytes of size: %d", ptr + 2);
    char c = 'a';

    char *ptr1 = &c;

    printf("\nThe adress of c is: %d", ptr1);

    ptr1++;

    printf("\nThe adress after incrementing is %d", ptr1);

    return 0;
}