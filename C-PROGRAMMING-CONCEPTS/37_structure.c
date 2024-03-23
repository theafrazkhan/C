//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Structure
// Description:

//*****************************************************************************************************

#include <stdio.h>
struct student
{
    int marks, id;
    char fav_char;
};

int main(void)
{

    struct student ali, haider;

    ali.marks = 99;
    ali.id = 98;
    ali.fav_char = 'a';

    haider.marks = 93;
    haider.id = 77;
    haider.fav_char = 'w';

    printf("Ali's marks are: %d\n", ali.marks);
    printf("Ali's id is: %d\n", ali.id);
    printf("Ali's favorite character is: %c\n", ali.fav_char);

    printf("Haider's marks are: %d\n", haider.marks);
    printf("Haider's id is: %d\n", haider.id);
    printf("Haider's favorite character is: %c\n", haider.fav_char);

    return 0;
}