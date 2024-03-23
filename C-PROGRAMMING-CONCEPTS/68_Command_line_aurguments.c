//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: command line aurguments
//

//*****************************************************************************************************

#include <stdio.h>

int main(int argc, char *argv[])
{

    printf("The value of argc is %d", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("The value of argument at index no. %d is %s\n", i, argv[i]);
    }

    return 0;
}