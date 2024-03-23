//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Pointers to calculate variable size on different architecture
// Description: In this program we will be using pointers to show the implementation of different library functions
// such as sizeof(), we basically have used pointer incrementation to implement these.

//*****************************************************************************************************

#include <stdio.h>

int size_of_ch(void);
int size_of_int(void);
int size_of_float(void);

int main(void)
{

    printf("The size of int on your computer is %d\n", size_of_int());
    printf("The size of char on your computer is %d\n", size_of_ch());
    printf("The size of float on your computer is %d\n", size_of_float());

    return 0;
}

int size_of_ch(void)
{

    char c;
    char *ptr = &c;
    int x = (int)ptr++;
    --ptr;
    return (x - (int)ptr);
}

int size_of_int(void)
{
    int n;
    int *ptr = &n;
    return ((int)++ptr - (int)&n);
}

int size_of_float(void) // untraditional method
{
    float f;
    float *ptr = &f;
    int x = (int)++ptr;
    --ptr;
    return (x - (int)ptr);
}