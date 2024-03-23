//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Wild pointers
// Description: Detailed working

//*****************************************************************************************************

#include <stdio.h>

int main(void)
{
    int a = 14;
    int *ptr; // Wild pointer

    ptr = &a;

    printf("Ptr is no more wild and have a value of  %d\n", ptr);

    return 0;
}