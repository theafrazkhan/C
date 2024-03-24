//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Html parser
// Description: In this program we are going to create the html parser already discussed in problem 41

//*****************************************************************************************************

#include <stdio.h>
#include <string.h>

void parser(char *string);

int main(void)
{

    char string[] = {"<h1>        this is a heading      </h1>"};
    printf("The string is %s\n", string);
    parser(string);
    printf("The parsed string is ~%s~\n", string);

    return 0;
}

void parser(char *string)
{
    int in = 0; // This is going to track wether we are inside the tag

    int index = 0;

    for (int i = 0, length = strlen(string); i < length; i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    // Remove the trivial spaces

    while (string[0] == ' ')
    {
        for (int i = 0, length = strlen(string); i < length; i++)
        {
            string[i] = string[i + 1];
        }
    }

    // Removing spaces from last

    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}