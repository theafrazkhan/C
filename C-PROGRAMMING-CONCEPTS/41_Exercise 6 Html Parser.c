//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Create a simple HTML Parser for <h1> Tag
// Description: Your task in this problem is to develop an html parser for h1 tag, all you have to do is to write a
// function that takes as parameter a string and returns the string after removing <h1> tag from start, </h1> tag
// from the last, and any blacnk spaces in between. Try creating it by yourself. Solution to this problem is
// available in later codes.
//*****************************************************************************************************

#include <stdio.h>

void Parser(/*dummy*/);

int main(void)
{
    char string[] = {"<h1>        this is a heading      </h1>"};
    printf("The string is %s\n", string);
    parser(string);
    printf("The parsed string is ~%s~\n", string);

    return 0;
}
void Parser(/*dummy*/)
{
}