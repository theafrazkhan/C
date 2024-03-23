//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Function Pointer in c
// Description: Have a look at Readme.md file to have detailed insights of this program

//*****************************************************************************************************

#include <stdio.h>

int AddNumber(int n1, int n2)
{
    return n1 + n2;
}
int main()
{
    int (*fun)(int, int);
    fun = AddNumber;
    int res1 = fun(20, 20);
    int res2 = AddNumber(20, 20);
    printf("Using function pointer: %d", res1);
    printf("\nUsing function name: %d", res2);
    return 0;
}