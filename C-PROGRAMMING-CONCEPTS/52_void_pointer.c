//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: void pointers
// Description: Detailed working

//*****************************************************************************************************

#include <stdio.h>

int main(void)
{

    int a = 10;
    float b = 100.8;

    void *ptra;
    void *ptrb;

    // void pointers can hold any type of data but cannot be dereferenced without typecasting
    ptra = &a;
    ptrb = &b;
    printf("The value of a is %d\n", *((int *)ptra));
    printf("The value of a is %f\n", *((float *)ptrb));

    return 0;
}