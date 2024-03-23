//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: String library
// Description: Since we noticed in the previous code that c does not support string as a data type so we need a library
// to work with strings
//*****************************************************************************************************

#include <stdio.h>
#include <string.h>

int main(void)
{

    char s1[] = "Hello";
    char s2[] = "world!";

    // To find the length of string

    printf("Length of string 1 is %d\n", strlen(s1));
    printf("Length of string 2 is %d\n", strlen(s2));

    // To reverse a string

    printf("String 2 is %s\n", s2);
    printf("Reverse of String 2 is %s\n", strrev(s2));

    // string 2 is reversed, to make it same as befor again using reverse function

    strrev(s2);

    // To append / concatenate two strings

    printf("String 1 is %s\n", s1);
    printf("String 2 is %s\n", s2);
    printf("Appended string is %s\n", strcat(s1, s2));

    // To copy a whole string into a new one

    char s3[100];

    // copying s1 into s3 already concatencated with s2
    strcpy(s3, s1);
    printf("s3 is  %s\n", s3);

    printf("The copied string into s3 is %s\n", s3);

    // To check if two sentence are same or compare it (strcmp)

    // strcmp retruns 0 if strings are same

    char sent[100];

    printf("\nNow this program will check if the given string is palindrome\nEnter a sentence: ");
    gets(sent);

    char rev[100];
    strcpy(rev, strrev(sent));
    strrev(sent);
    if (strcmp(sent, rev) == 0)
        printf("palindrome\n");

    else
        printf("Not a palindrome\n");

    return 0;
}