//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Strings
// Description: Do they exist in c, No they do not, but we can manipulate character arrays and \0 aka null
// Character to produce strings as per our requirement, to learn more about strings read the documentation
// attached for this program
//*****************************************************************************************************

#include <stdio.h>

void printstr(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }

    printf("\n");
}

int main(void)
{

    // A string in c is nothing but null terminating character array

    // char str[] = {'a', 'f', 'r', 'a', 'z'};
    //  Is this a valid string??

    // No its not, althought the one below is valid

    char str[] = {'a', 'f', 'r', 'a', 'z', '\0'};

    printstr(str);

    char str2[34];
    printf("Enter a string: ");
    gets(str2);

    // Now using printf to print the string

    printf("Printing using %%s: %s\n", str2);

    printf("Printing using puts: ");

    puts(str2);

    printf("\n");

    return 0;
}