//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: unions
// Description: Use of unions is really necessary to write memory efficient programs.

//*****************************************************************************************************

#include <stdio.h>
#include <string.h>

typedef union student
{
    int marks, id;
    char fav_char;
    char name[34];
} student;

int main(void)
{

    student s1;

    s1.marks = 45;
    s1.id = 100;
    s1.fav_char = 'a';
    strcpy(s1.name, "Afraz");

    printf("The id is %d\n", s1.id);
    printf("The markd is %d\n", s1.marks);
    printf("The favorite character  is %c\n", s1.fav_char);
    printf("The name is %s\n", s1.name);

    return 0;
}