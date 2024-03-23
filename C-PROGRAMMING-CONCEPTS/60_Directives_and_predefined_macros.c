//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Directives and pre difined macros
// Description: Detailed working

//*****************************************************************************************************

#include <stdio.h>

int main(void)
{
    // __FILE__ Macro contains the current file name
    printf("File name is %s\n", __FILE__);

    // __DATE__ Macro contains the current  date
    printf("Today's date is %s\n", __DATE__);

    // __TIME__ Macro contains the current time
    printf("Today's TIME is %s\n", __TIME__);

    // __STDC__ Macro contains the wether the program is compiled with Ansi standereds
    printf("Ansi std: %d\n", __STDC__);

    return 0;
}